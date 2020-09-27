/*
 * Copyright (c) 2020-2020 horaciodrs (https://github.com/horaciodrs/TradeSim)
 *
 * This file is part of TradeSim.
 *
 * TradeSim is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * TradeSim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Akira. If not, see <https://www.gnu.org/licenses/>.
 *
 * Authored by: Horacio Daniel Ros <horaciodrs@gmail.com>
 */

public class TradeSim.Services.Drawings {

    public weak TradeSim.Widgets.Canvas ref_canvas;

    public enum Type{
          LINE
        , HLINE
        , RECTANGLE
        , FIBONACCI
    }

    public bool drawing_mode; //Indica si se esta dibujando algo.

    public Array<TradeSim.Drawings.Line> lines;

    public Drawings(TradeSim.Widgets.Canvas _canvas){
        ref_canvas = _canvas;
        lines = new Array<TradeSim.Drawings.Line> ();
    }

    public void show_all(Cairo.Context ctext){

        for(int i=0; i<lines.length;i++){
            lines.index(i).render(ctext);
        }

    }

    public void  draw_line(string _id, DateTime d1, double p1, DateTime d2, double p2){

        var new_line = line_exists(_id);
        bool is_new_line = false;

        if(new_line == null){
            new_line = new TradeSim.Drawings.Line(ref_canvas, _id);
            is_new_line = true;
        }

        if(new_line.get_x1() == null){
            //Si no hay x1 es porque se esta creando la linea
            //por primer vez.
            new_line.set_x1(d1);
            new_line.set_x2(d1);
            new_line.set_y1(p1);
            new_line.set_y2(p1);
        }else{
            new_line.set_x2(d2);
            new_line.set_y2(p2);
            /*string str = "line:" + new_line.id;
            str = str + " x:" + new_line.get_x2().to_string();
            print(str + "\n");*/
        }

        if(is_new_line){
            lines.append_val(new_line);
        }
        
    }

    public TradeSim.Drawings.Line? line_exists(string _id){

        for(int i=0; i<lines.length;i++){
            if(lines.index(i).id == _id){
                return lines.index(i);
            }
        }

        return null;

    }
}