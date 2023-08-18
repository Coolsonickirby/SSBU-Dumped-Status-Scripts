
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::ShulkSpecialNAction_main(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  BattleObjectModuleAccessor **ppBVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  ppBVar6 = &this->moduleAccessor;
  fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar6,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::KineticModule__enable_energy_impl(*ppBVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CValue::L2CValue(aLStack144,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::KineticModule__unable_energy_impl(*ppBVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack144,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__unable_energy_impl(*ppBVar6,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue(aLStack144,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__unable_energy_impl(*ppBVar6,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_01);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar6,iVar2);
  lib::L2CValue::L2CValue(aLStack160,iVar2);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHULK_MONAD_TYPE_JUMP);
  uVar4 = lib::L2CValue::operator__(aLStack160,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar6,iVar2);
    lib::L2CValue::L2CValue(aLStack160,iVar2);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHULK_MONAD_TYPE_SPEED);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
      iVar2 = lib::L2CValue::as_integer(aLStack176);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar6,iVar2);
      lib::L2CValue::L2CValue(aLStack160,iVar2);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHULK_MONAD_TYPE_SHIELD);
      uVar4 = lib::L2CValue::operator__(aLStack160,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
        iVar2 = lib::L2CValue::as_integer(aLStack176);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar6,iVar2);
        lib::L2CValue::L2CValue(aLStack160,iVar2);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHULK_MONAD_TYPE_BUSTER);
        uVar4 = lib::L2CValue::operator__(aLStack160,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_N_TYPE);
          iVar2 = lib::L2CValue::as_integer(aLStack176);
          iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar6,iVar2);
          lib::L2CValue::L2CValue(aLStack160,iVar2);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHULK_MONAD_TYPE_SMASH);
          uVar4 = lib::L2CValue::operator__(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((uVar4 & 1) == 0) goto LAB_71001955b4;
          pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar3,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x1311f8542c);
            lib::L2CValue::L2CValue(aLStack160,0.0);
            lib::L2CValue::L2CValue(aLStack176,1.0);
            lib::L2CValue::L2CValue(aLStack192,false);
            HVar5 = lib::L2CValue::as_hash(aLStack112);
            fVar7 = (float)lib::L2CValue::as_number(aLStack160);
            fVar8 = (float)lib::L2CValue::as_number(aLStack176);
            bVar1 = lib::L2CValue::as_bool(aLStack192);
            app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                      (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xf1a61d9f8);
            lib::L2CValue::L2CValue(aLStack160,0.0);
            lib::L2CValue::L2CValue(aLStack176,1.0);
            lib::L2CValue::L2CValue(aLStack192,false);
            HVar5 = lib::L2CValue::as_hash(aLStack112);
            fVar7 = (float)lib::L2CValue::as_number(aLStack160);
            fVar8 = (float)lib::L2CValue::as_number(aLStack176);
            bVar1 = lib::L2CValue::as_bool(aLStack192);
            app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                      (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_JUMP_SQUAT);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__unable_transition_term_group_ex_impl(*ppBVar6,iVar2);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_05);
          lib::L2CValue::operator_(aLStack144,aLStack112);
        }
        else {
          pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar3,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x148c2b918b);
            lib::L2CValue::L2CValue(aLStack160,0.0);
            lib::L2CValue::L2CValue(aLStack176,1.0);
            lib::L2CValue::L2CValue(aLStack192,false);
            HVar5 = lib::L2CValue::as_hash(aLStack112);
            fVar7 = (float)lib::L2CValue::as_number(aLStack160);
            fVar8 = (float)lib::L2CValue::as_number(aLStack176);
            bVar1 = lib::L2CValue::as_bool(aLStack192);
            app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                      (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0x100d9e1ecb);
            lib::L2CValue::L2CValue(aLStack160,0.0);
            lib::L2CValue::L2CValue(aLStack176,1.0);
            lib::L2CValue::L2CValue(aLStack192,false);
            HVar5 = lib::L2CValue::as_hash(aLStack112);
            fVar7 = (float)lib::L2CValue::as_number(aLStack160);
            fVar8 = (float)lib::L2CValue::as_number(aLStack176);
            bVar1 = lib::L2CValue::as_bool(aLStack192);
            app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                      (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_04);
          lib::L2CValue::operator_(aLStack144,aLStack112);
        }
      }
      else {
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar3,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x14db876322);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,1.0);
          lib::L2CValue::L2CValue(aLStack192,false);
          HVar5 = lib::L2CValue::as_hash(aLStack112);
          fVar7 = (float)lib::L2CValue::as_number(aLStack160);
          fVar8 = (float)lib::L2CValue::as_number(aLStack176);
          bVar1 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0x105a32ec62);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,1.0);
          lib::L2CValue::L2CValue(aLStack192,false);
          HVar5 = lib::L2CValue::as_hash(aLStack112);
          fVar7 = (float)lib::L2CValue::as_number(aLStack160);
          fVar8 = (float)lib::L2CValue::as_number(aLStack176);
          bVar1 = lib::L2CValue::as_bool(aLStack192);
          app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                    (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
        }
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_03);
        lib::L2CValue::operator_(aLStack144,aLStack112);
      }
    }
    else {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x13a1ac8a4e);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar5 = lib::L2CValue::as_hash(aLStack112);
        fVar7 = (float)lib::L2CValue::as_number(aLStack160);
        fVar8 = (float)lib::L2CValue::as_number(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0xfaa35079a);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar5 = lib::L2CValue::as_hash(aLStack112);
        fVar7 = (float)lib::L2CValue::as_number(aLStack160);
        fVar8 = (float)lib::L2CValue::as_number(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                  (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_02);
      lib::L2CValue::operator_(aLStack144,aLStack112);
    }
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x12fcadf4fe);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack192,false);
      HVar5 = lib::L2CValue::as_hash(aLStack112);
      fVar7 = (float)lib::L2CValue::as_number(aLStack160);
      fVar8 = (float)lib::L2CValue::as_number(aLStack176);
      bVar1 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0xebeff0131);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack192,false);
      HVar5 = lib::L2CValue::as_hash(aLStack112);
      fVar7 = (float)lib::L2CValue::as_number(aLStack160);
      fVar8 = (float)lib::L2CValue::as_number(aLStack176);
      bVar1 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_01);
    lib::L2CValue::operator_(aLStack144,aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71001955b4:
  lib::L2CValue::L2CValue(aLStack160,0x20cbc92683);
  lib::L2CValue::L2CValue(aLStack176,1);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
  lib::L2CValue::L2CValue(aLStack112,1);
  lib::L2CValue::operator_(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0x3a40337e2c);
  lib::L2CValue::L2CValue(aLStack112,1);
  lib::L2CValue::operator_(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack272,&DAT_7100195b90);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

