
void __thiscall
L2CFighterTrail::status::AttackLw4_main_loop(L2CFighterTrail *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  L2CValue *in_x2;
  float fVar6;
  undefined8 uVar7;
  long lVar8;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  ulong local_80;
  BattleObject *pBStack120;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
  uVar3 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_DOWN);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(float)uVar7);
    lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar7 >> 0x20));
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_80);
    lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CAgent::math_atan((L2CAgent *)aLStack96,aLStack80,in_x2);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,fVar6);
    lib::L2CValue::operator_(aLStack224);
    pLVar5 = aLStack208;
    lib::L2CValue::operator_(aLStack192,pLVar5);
    lib::L2CAgent::math_deg((L2CAgent *)auStack176,pLVar5);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack256,fVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,90.0);
    lib::L2CValue::operator_((L2CValue *)&local_80,aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0x54f934137);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    HVar4 = lib::L2CValue::as_hash((L2CValue *)(auStack176 + 0x10));
    uVar3 = lib::L2CValue::as_number(aLStack144);
    lVar8 = lib::L2CValue::as_number((L2CValue *)auStack176);
    uVar2 = lib::L2CValue::as_number(aLStack192);
    local_80 = uVar3 & 0xffffffff | lVar8 << 0x20;
    pBStack120 = (BattleObject *)(ulong)uVar2;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar4,(Vector3f *)&local_80,0,0);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lua2cpp::L2CFighterCommon::status_AttackLw4_Main(this);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

