
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000d340(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  ppBVar7 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WARIO_GASS_LEVEL_FLY);
    uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WARIO_GASS_LEVEL_L);
      uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WARIO_GASS_LEVEL_M);
        uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::operator!(aLStack96);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x11fda2abb4);
              HVar6 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
              goto LAB_710000e8b0;
            }
            lib::L2CValue::L2CValue(aLStack80,0x11fda2abb4);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::L2CValue(aLStack128,false);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            fVar8 = (float)lib::L2CValue::as_number(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            bVar1 = lib::L2CValue::as_bool(aLStack128);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::operator!(aLStack96);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0xd1dcf089d);
              HVar6 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
              goto LAB_710000e8b0;
            }
            lib::L2CValue::L2CValue(aLStack80,0xd1dcf089d);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::L2CValue(aLStack128,false);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            fVar8 = (float)lib::L2CValue::as_number(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            bVar1 = lib::L2CValue::as_bool(aLStack128);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::operator!(aLStack96);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x1129e3946b);
              HVar6 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
              goto LAB_710000e8b0;
            }
            lib::L2CValue::L2CValue(aLStack80,0x1129e3946b);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::L2CValue(aLStack128,false);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            fVar8 = (float)lib::L2CValue::as_number(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            bVar1 = lib::L2CValue::as_bool(aLStack128);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::operator!(aLStack96);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0xdc98e3742);
              HVar6 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
              goto LAB_710000e8b0;
            }
            lib::L2CValue::L2CValue(aLStack80,0xdc98e3742);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::L2CValue(aLStack128,false);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            fVar8 = (float)lib::L2CValue::as_number(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            bVar1 = lib::L2CValue::as_bool(aLStack128);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          }
        }
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::operator!(aLStack96);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x1130f8a52a);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
            goto LAB_710000e8b0;
          }
          lib::L2CValue::L2CValue(aLStack80,0x1130f8a52a);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::L2CValue(aLStack112,1.0);
          lib::L2CValue::L2CValue(aLStack128,false);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack96);
          fVar9 = (float)lib::L2CValue::as_number(aLStack112);
          bVar1 = lib::L2CValue::as_bool(aLStack128);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::operator!(aLStack96);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0xdd0950603);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
            goto LAB_710000e8b0;
          }
          lib::L2CValue::L2CValue(aLStack80,0xdd0950603);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::L2CValue(aLStack112,1.0);
          lib::L2CValue::L2CValue(aLStack128,false);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack96);
          fVar9 = (float)lib::L2CValue::as_number(aLStack112);
          bVar1 = lib::L2CValue::as_bool(aLStack128);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        }
      }
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::operator!(aLStack96);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x1488f312cf);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
          goto LAB_710000e8b0;
        }
        lib::L2CValue::L2CValue(aLStack80,0x1488f312cf);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::L2CValue(aLStack128,false);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        fVar8 = (float)lib::L2CValue::as_number(aLStack96);
        fVar9 = (float)lib::L2CValue::as_number(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::operator!(aLStack96);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x1009469d8f);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
          goto LAB_710000e8b0;
        }
        lib::L2CValue::L2CValue(aLStack80,0x1009469d8f);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::L2CValue(aLStack128,false);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        fVar8 = (float)lib::L2CValue::as_number(aLStack96);
        fVar9 = (float)lib::L2CValue::as_number(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WARIO_GASS_LEVEL_FLY);
    uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WARIO_GASS_LEVEL_L);
      uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_WARIO_GASS_LEVEL_M);
        uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::operator!(aLStack96);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x11fda2abb4);
              HVar6 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
              goto LAB_710000e8b0;
            }
            lib::L2CValue::L2CValue(aLStack80,0x11fda2abb4);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::L2CValue(aLStack128,false);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            fVar8 = (float)lib::L2CValue::as_number(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            bVar1 = lib::L2CValue::as_bool(aLStack128);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::operator!(aLStack96);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0xd1dcf089d);
              HVar6 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
              goto LAB_710000e8b0;
            }
            lib::L2CValue::L2CValue(aLStack80,0xd1dcf089d);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::L2CValue(aLStack128,false);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            fVar8 = (float)lib::L2CValue::as_number(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            bVar1 = lib::L2CValue::as_bool(aLStack128);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::operator!(aLStack96);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x1129e3946b);
              HVar6 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
              goto LAB_710000e8b0;
            }
            lib::L2CValue::L2CValue(aLStack80,0x1129e3946b);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::L2CValue(aLStack128,false);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            fVar8 = (float)lib::L2CValue::as_number(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            bVar1 = lib::L2CValue::as_bool(aLStack128);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            lib::L2CValue::operator!(aLStack96);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0xdc98e3742);
              HVar6 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                        (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
              goto LAB_710000e8b0;
            }
            lib::L2CValue::L2CValue(aLStack80,0xdc98e3742);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::L2CValue(aLStack128,false);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            fVar8 = (float)lib::L2CValue::as_number(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack112);
            bVar1 = lib::L2CValue::as_bool(aLStack128);
            app::lua_bind::MotionModule__change_motion_impl
                      (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          }
        }
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::operator!(aLStack96);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x1130f8a52a);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
            goto LAB_710000e8b0;
          }
          lib::L2CValue::L2CValue(aLStack80,0x1130f8a52a);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::L2CValue(aLStack112,1.0);
          lib::L2CValue::L2CValue(aLStack128,false);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack96);
          fVar9 = (float)lib::L2CValue::as_number(aLStack112);
          bVar1 = lib::L2CValue::as_bool(aLStack128);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::operator!(aLStack96);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0xdd0950603);
            HVar6 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
            goto LAB_710000e8b0;
          }
          lib::L2CValue::L2CValue(aLStack80,0xdd0950603);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::L2CValue(aLStack112,1.0);
          lib::L2CValue::L2CValue(aLStack128,false);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack96);
          fVar9 = (float)lib::L2CValue::as_number(aLStack112);
          bVar1 = lib::L2CValue::as_bool(aLStack128);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        }
      }
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::operator!(aLStack96);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x1488f312cf);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
          goto LAB_710000e8b0;
        }
        lib::L2CValue::L2CValue(aLStack80,0x1488f312cf);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::L2CValue(aLStack128,false);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        fVar8 = (float)lib::L2CValue::as_number(aLStack96);
        fVar9 = (float)lib::L2CValue::as_number(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_WARIO_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::operator!(aLStack96);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x1009469d8f);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
          goto LAB_710000e8b0;
        }
        lib::L2CValue::L2CValue(aLStack80,0x1009469d8f);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::L2CValue(aLStack112,1.0);
        lib::L2CValue::L2CValue(aLStack128,false);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        fVar8 = (float)lib::L2CValue::as_number(aLStack96);
        fVar9 = (float)lib::L2CValue::as_number(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710000e8b0:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

