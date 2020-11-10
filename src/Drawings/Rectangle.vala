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

public class TradeSim.Drawings.Rectangle : TradeSim.Drawings.Line {

    public Rectangle (TradeSim.Widgets.Canvas canvas, string _id) {

        base (canvas, _id);

        color.alpha = 0.5;

    }

    public Rectangle.default () {
        base.default ();
    }

    public override void render (Cairo.Context ctext) {

        if (!visible) {
            return;
        }

        update_data ();

        if (date1.compare (ref_canvas.date_from) < 0) {
            if (date2.compare (ref_canvas.date_from) < 0) {
                return;
            }
        }

        if(ref_canvas.draw_mode_rectangle){
            handler.draw (ctext);
        }

        color.apply_to (ctext);
        ctext.rectangle (x1, y1, x2 - x1, y2 - y1);
        ctext.fill ();
        ctext.stroke ();

    }

    public override void write_file (Xml.TextWriter writer, bool unused) throws FileError {

        writer.start_element ("rectangle");
        base.write_file (writer, false);
        writer.end_element ();

    }

}
