
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterIke::status::SpecialHi4_init(L2CFighterIke *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  float fVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_HI_2);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_HI_3);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) goto LAB_710000be64;
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_KIND_SPECIAL_HI_4);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_710000be64;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      app::KineticUtility::clear_unable_energy(iVar2,pBVar7);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      app::KineticUtility::clear_unable_energy(iVar2,pBVar7);
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CValue::L2CValue(aLStack96,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS_ANGLE);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CValue::L2CValue(aLStack96,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS_IGNORE_NORMAL);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      }
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      app::KineticUtility::clear_unable_energy(iVar2,pBVar7);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      app::KineticUtility::clear_unable_energy(iVar2,pBVar7);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      app::KineticUtility::clear_unable_energy(iVar2,pBVar7);
    }
    lVar1 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack128,0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack144,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
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
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_IKE_STATUS_SPECIAL_HI_WORK_INT_SITUATION_PREV);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack144,_ENERGY_CONTROLLER_RESET_TYPE_FREE);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
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
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_IKE_STATUS_SPECIAL_HI_WORK_INT_SITUATION_PREV);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack144,0xf71f4d4f8);
    lib::L2CValue::L2CValue(aLStack160,0);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,0x1220fc2660);
    lib::L2CValue::L2CValue(aLStack160,0);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x15059ad97a);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::operator_(aLStack112,aLStack128);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::mul_x_speed_max(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack144,100.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    app::KineticUtility::clear_unable_energy(iVar2,pBVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    app::KineticUtility::clear_unable_energy(iVar2,pBVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    app::KineticUtility::clear_unable_energy(iVar2,pBVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lVar1 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_710000be64:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

