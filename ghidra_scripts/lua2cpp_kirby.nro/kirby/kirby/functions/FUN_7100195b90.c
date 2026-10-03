
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100195b90(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  ppBVar8 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator==(aLStack160,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_7100195ca0;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100196758;
  }
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100195ca0:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  this_00 = &this->globalTable;
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    goto LAB_7100196758;
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_7100195ea4;
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHULK_MONAD_TYPE_JUMP);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHULK_MONAD_TYPE_SPEED);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0xfaa35079a);
        HVar7 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
        goto LAB_71001964b8;
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHULK_MONAD_TYPE_SHIELD);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x105a32ec62);
        HVar7 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
        goto LAB_71001964b8;
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHULK_MONAD_TYPE_BUSTER);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x100d9e1ecb);
        HVar7 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
        goto LAB_71001964b8;
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHULK_MONAD_TYPE_SMASH);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0xf1a61d9f8);
        HVar7 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
        goto LAB_71001964b8;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xebeff0131);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
LAB_71001964b8:
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar4);
LAB_7100196744:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  else {
LAB_7100195ea4:
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHULK_MONAD_TYPE_JUMP);
        uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHULK_MONAD_TYPE_SPEED);
          uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,0x13a1ac8a4e);
            HVar7 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                      (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
            goto LAB_7100196654;
          }
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHULK_MONAD_TYPE_SHIELD);
          uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,0x14db876322);
            HVar7 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                      (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
            goto LAB_7100196654;
          }
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHULK_MONAD_TYPE_BUSTER);
          uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,0x148c2b918b);
            HVar7 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                      (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
            goto LAB_7100196654;
          }
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHULK_MONAD_TYPE_SMASH);
          uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,0x1311f8542c);
            HVar7 = lib::L2CValue::as_hash(aLStack80);
            app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                      (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
            goto LAB_7100196654;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0x12fcadf4fe);
          HVar7 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
LAB_7100196654:
          lib::L2CValue::~L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar4);
        goto LAB_7100196744;
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100196758:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

