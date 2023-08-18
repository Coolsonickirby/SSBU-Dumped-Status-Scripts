
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPfushigisouLeafcutter::status::Move_main_loop
          (L2CWeaponPfushigisouLeafcutter *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack176,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack176);
      fVar9 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack176);
      fVar9 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack192,_GROUND_TOUCH_FLAG_ALL);
      uVar4 = lib::L2CValue::as_integer(aLStack192);
      uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,(float)uVar13);
      pLVar8 = (L2CValue *)(auStack176 + 0x10);
      lib::L2CValue::L2CValue(pLVar8,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack176);
      pLVar7 = pLVar8;
      lib::L2CValue::operator_(aLStack144,pLVar8);
      lib::L2CValue::_L2CValue(pLVar8);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      fVar12 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)app::sv_math::vec2_angle(fVar9,fVar10,fVar11,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar9);
      lib::L2CAgent::math_deg((L2CAgent *)auStack176,pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,0x10cab9c561);
      lib::L2CValue::L2CValue(aLStack224,0xb7804953b);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack208,fVar9);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,90.0);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)auStack176);
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      uVar5 = lib::L2CValue::operator_(aLStack224,aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      bVar2 = (uVar5 & 1) == 0;
      if (bVar2) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack176,_WEAPON_PFUSHIGISOU_LEAFCUTTER_STATUS_KIND_CLASH);
        lib::L2CValue::L2CValue(aLStack224,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack176,0x10cab9c561);
        lib::L2CValue::L2CValue(aLStack240,0xf64de2155);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack176);
        pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack240);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,(ulong)pLVar7);
        lib::L2CValue::L2CValue(aLStack224,fVar9);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        fVar9 = (float)lib::L2CValue::as_number(aLStack128);
        fVar10 = (float)lib::L2CValue::as_number(aLStack144);
        fVar11 = (float)lib::L2CValue::as_number(aLStack96);
        fVar12 = (float)lib::L2CValue::as_number(aLStack112);
        uVar13 = app::sv_math::vec2_reflection(fVar9,fVar10,fVar11,fVar12);
        lib::L2CValue::L2CValue((L2CValue *)auStack176,(float)uVar13);
        pLVar8 = (L2CValue *)(auStack176 + 0x10);
        lib::L2CValue::L2CValue(pLVar8,(float)((ulong)uVar13 >> 0x20));
        lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack176);
        lib::L2CValue::operator_(aLStack112,pLVar8);
        lib::L2CValue::_L2CValue(pLVar8);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::L2CValue((L2CValue *)auStack176,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::operator_(aLStack96,aLStack224);
        lib::L2CValue::operator_(aLStack112,aLStack224);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack176);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack240,fVar9);
        lib::L2CValue::operator_(aLStack96,aLStack240);
        pLVar8 = aLStack272;
        lib::L2CAgent::math_atan((L2CAgent *)aLStack112,pLVar8,pLVar7);
        lib::L2CAgent::math_deg((L2CAgent *)auStack176,pLVar8);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
        lib::L2CValue::operator_(aLStack256,(L2CValue *)auStack176);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack176,
                   _WEAPON_PFUSHIGISOU_LEAFCUTTER_INSTANCE_WORK_ID_FLOAT_FLY_ANGLE_TARGET);
        fVar9 = (float)lib::L2CValue::as_number(aLStack272);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
      }
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if (bVar2) {
        return;
      }
    }
    FUN_710000be40(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

