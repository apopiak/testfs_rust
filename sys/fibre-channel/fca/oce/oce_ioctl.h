/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */

/*
 * Copyright 2009 Emulex.  All rights reserved.
 * Use is subject to license terms.
 */

/*
 * Driver private ioctls
 */

#ifndef _OCE_IOCTL_H_
#define	_OCE_IOCTL_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 * OCE IOCTLS.
 */

#define	OCE_IOC			((((('O' << 8) + 'C') << 8) + 'E') << 8)

#define	OCE_ISSUE_MBOX		(OCE_IOC|1)

#ifdef __cplusplus
}
#endif

#endif /* _OCE_IOCTL_H_ */
