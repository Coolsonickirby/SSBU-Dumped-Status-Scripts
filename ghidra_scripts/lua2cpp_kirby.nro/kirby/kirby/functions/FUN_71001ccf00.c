
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001ccf00(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *this;
  ulong uVar5;
  Hash40 HVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_STEP);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  ppBVar7 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(*ppBVar7,GVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_START);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_LOOP);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_END);
        uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) goto LAB_71001cda0c;
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE_END);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x11c0a0c60e);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          fVar9 = (float)lib::L2CValue::as_number(aLStack128);
          bVar1 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE_END);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0x11c0a0c60e);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          fVar9 = (float)lib::L2CValue::as_number(aLStack128);
          bVar1 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE_START);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x1331f32137);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        fVar8 = (float)lib::L2CValue::as_number(aLStack112);
        fVar9 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE_START);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x1331f32137);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(*ppBVar7,GVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_START);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_LOOP);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_END);
        uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) goto LAB_71001cda0c;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar7,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE_END);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0xd20cd6527);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          fVar9 = (float)lib::L2CValue::as_number(aLStack128);
          bVar1 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE_END);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0xd20cd6527);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar7,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          fVar9 = (float)lib::L2CValue::as_number(aLStack128);
          bVar1 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_MOTION);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE_START);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xf3a6aace3);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        fVar8 = (float)lib::L2CValue::as_number(aLStack112);
        fVar9 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_CONTINUE_START);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xf3a6aace3);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar7,HVar6,-1.0,1.0,0.0,false,false);
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_71001cda0c:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

