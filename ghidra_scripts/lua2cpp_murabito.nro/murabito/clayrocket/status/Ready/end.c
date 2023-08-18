
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMurabitoClayrocket::status::Ready_end
          (L2CWeaponMurabitoClayrocket *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong local_b0;
  undefined8 uStack168;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_RIDE);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,true);
    uVar4 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      uVar7 = app::lua_bind::LinkModule__get_parent_shape_center_pos_impl
                        (this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,(float)uVar7);
      lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar7 >> 0x20));
      lib::L2CValue::operator_(aLStack64,(L2CValue *)&local_b0);
      lib::L2CValue::operator_(aLStack80,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      goto LAB_710002c050;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_SAFE_POS_X);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar5);
  lib::L2CValue::operator_(aLStack64,(L2CValue *)&local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_SAFE_POS_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar5);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_b0);
LAB_710002c050:
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar4 = lib::L2CValue::as_number(aLStack64);
  uVar6 = lib::L2CValue::as_number(aLStack80);
  local_b0 = uVar4 & 0xffffffff | (ulong)uVar6 << 0x20;
  uStack168 = 0;
  app::lua_bind::GroundModule__set_shape_safe_pos_impl(this->moduleAccessor,(Vector2f *)&local_b0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

