
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMewtwoShadowball::status::Shoot_main_loop
          (L2CWeaponMewtwoShadowball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CAgent *this_00;
  L2CValue *pLVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack160,_WEAPON_MEWTWO_SHADOWBALL_STATUS_KIND_HIT_GROUND)
    ;
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar7 = (L2CValue *)auStack160;
    goto LAB_710001b678;
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  pLVar7 = aLStack112;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,SUB81(pLVar7,0));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_GROUND_TOUCH_FLAG_UP);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x18cdc1683);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack128,_GROUND_TOUCH_FLAG_UP);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      uVar10 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                         (this->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,(float)uVar10);
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),(float)((ulong)uVar10 >> 0x20));
      lib::L2CValue::operator_(pLVar4,(L2CValue *)auStack160);
      lib::L2CValue::operator_(pLVar5,(L2CValue *)(auStack160 + 0x10));
      goto LAB_710001b3f0;
    }
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar10 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                       (this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,(float)uVar10);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),(float)((ulong)uVar10 >> 0x20));
    lib::L2CValue::operator_(pLVar4,(L2CValue *)auStack160);
    lib::L2CValue::operator_(pLVar5,(L2CValue *)(auStack160 + 0x10));
LAB_710001b3f0:
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x1fbdb2615);
  fVar8 = (float)lib::L2CValue::as_number(pLVar4);
  fVar9 = (float)lib::L2CValue::as_number(pLVar5);
  fVar8 = (float)app::sv_math::vec2_length(fVar8,fVar9);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,1e-05);
  uVar6 = lib::L2CValue::operator_((L2CValue *)auStack160,aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack80,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x1fbdb2615);
    lib::L2CAgent::math_atan(this_00,pLVar4,pLVar7);
    lib::L2CAgent::math_abs((L2CAgent *)auStack160,pLVar4);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0x10339c9593);
    lib::L2CValue::L2CValue(aLStack192,0x10a4ec2fe2);
    pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (this->moduleAccessor,(ulong)pLVar7,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar8);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CAgent::math_rad((L2CAgent *)auStack176,pLVar7);
    lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)auStack160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::operator_
              ((L2CValue *)&LINK_ATTRIBUTE_REFERENCE_PARENT_INK_PAINT,(L2CValue *)auStack176);
    uVar6 = lib::L2CValue::operator_((L2CValue *)auStack176,aLStack128);
    if (((uVar6 & 1) != 0) &&
       (uVar6 = lib::L2CValue::operator_(aLStack128,aLStack192), (uVar6 & 1) != 0)) {
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0x18cdc1683);
      lib::L2CValue::operator_(aLStack224,pLVar7);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,-1e-05);
      uVar6 = lib::L2CValue::operator_(aLStack208,(L2CValue *)auStack160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack208,0x199c462b5d);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue((L2CValue *)auStack160);
        lib::L2CValue::_L2CValue(aLStack208);
      }
    }
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pLVar7 = aLStack80;
LAB_710001b678:
  lib::L2CValue::_L2CValue(pLVar7);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

