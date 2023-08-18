
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialHiLanding_main_loop(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  GroundTouchID GVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  BattleObjectModuleAccessor *pBVar4;
  void *pvVar5;
  ulong uVar6;
  GroundCollisionLine *pGVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  undefined8 uStack104;
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack256,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack256,_GROUND_TOUCH_ID_DOWN);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  GVar1 = lib::L2CValue::as_integer(aLStack256);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  pvVar5 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl(pBVar4,GVar1);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack176 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),pvVar5);
  }
  lib::L2CValue::_L2CValue(aLStack256);
  uVar3 = lib::L2CValue::operator__
                    ((L2CValue *)(auStack176 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    pLVar2 = aLStack256;
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar2);
    fVar8 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar8);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack208,0x1301cd6376);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar6)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar8);
    uVar3 = lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      fVar8 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack272,fVar8);
      pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
      pGVar7 = (GroundCollisionLine *)lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      fVar8 = (float)lib::L2CValue::as_number(aLStack272);
      fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
      uVar3 = lib::L2CValue::as_number((L2CValue *)auStack192);
      uVar10 = lib::L2CValue::as_number(aLStack208);
      local_70 = (BattleObjectModuleAccessor *)(uVar3 & 0xffffffff | (ulong)uVar10 << 0x20);
      uStack104 = 0;
      pvVar5 = (void *)app::FighterUtil::get_pos_on_line
                                 (pBVar4,pGVar7,fVar8,fVar9,(Vector2f *)&local_70);
      if (pvVar5 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack256,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack256,pvVar5);
      }
      lib::L2CValue::L2CValue(aLStack240,(float)local_70);
      lib::L2CValue::L2CValue(aLStack224,local_70._4_4_);
      lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack256);
      lib::L2CValue::operator_((L2CValue *)auStack192,aLStack240);
      lib::L2CValue::operator_(aLStack208,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      uVar3 = lib::L2CValue::operator__
                        ((L2CValue *)(auStack176 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack256);
      }
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    }
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  }
  lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0x12f9dab781);
  uVar3 = lib::L2CValue::as_integer(aLStack256);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  pLVar2 = aLStack208;
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar2);
  fVar8 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar8);
  lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar2);
  lib::L2CValue::L2CValue(aLStack256,1e-05);
  lib::L2CValue::operator_((L2CValue *)&local_70,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  uVar3 = lib::L2CValue::operator__((L2CValue *)auStack176,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0x50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack256);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  return;
}

