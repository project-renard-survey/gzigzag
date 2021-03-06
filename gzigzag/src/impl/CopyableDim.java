/*   
CopyableDim.java
 *    
 *    You may use and distribute under the terms of either the GNU Lesser
 *    General Public License, either version 2 of the license or,
 *    at your choice, any later version. Alternatively, you may use and
 *    distribute under the terms of the XPL.
 *
 *    See the LICENSE.lgpl and LICENSE.xpl files for the specific terms of 
 *    the licenses.
 *
 *    This software is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the README
 *    file for more details.
 *
 */
/*
 * Written by Benja Fallenstein
 */
package org.gzigzag.impl;
import org.gzigzag.*;
import java.util.*;

/** A dimension of which a copy can be made, for making diffs.
 */

public interface CopyableDim extends Dim {
String rcsid = "$Id: CopyableDim.java,v 1.2 2001/08/17 20:45:39 bfallenstein Exp $";

    /** Make a copy of this dimension.
     *  This does not need to be an instance of the same class; it just
     *  needs to contain the appropriate connections so that we can
     *  use it for generating diffs.
     */
    Dim makeCopy(Space space, ObsTrigger trigger);
}
