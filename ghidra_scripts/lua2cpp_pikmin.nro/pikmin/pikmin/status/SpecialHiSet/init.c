
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialHiSet_init(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar5;
  uint uVar6;
  long lVar7;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_OWNER_LR_CURRENT);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  lib::L2CValue::_L2CValue(aLStack224);
  fVar5 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar5);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_HOLD_INDEX);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack144,iVar1);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack224,0);
  uVar2 = lib::L2CValue::operator__(aLStack144,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack224,1);
    uVar2 = lib::L2CValue::operator__(aLStack144,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack224,2);
      uVar2 = lib::L2CValue::operator__(aLStack144,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar2 & 1) == 0) goto LAB_71000264ec;
      lib::L2CValue::L2CValue(aLStack224,1.0);
      lib::L2CValue::operator_(aLStack160,aLStack224);
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,-1.0);
      lib::L2CValue::operator_(aLStack160,aLStack224);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::operator_(aLStack160,aLStack224);
  }
  lib::L2CValue::_L2CValue(aLStack224);
LAB_71000264ec:
  lib::L2CValue::L2CValue(aLStack224,0.0);
  uVar2 = lib::L2CValue::operator_(aLStack112,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator_(aLStack160);
    lib::L2CValue::operator_(aLStack160,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue
            (aLStack224,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_HI_SET_WORK_FLOAT_POS_X_OFFSET);
  fVar5 = (float)lib::L2CValue::as_number(aLStack160);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue
            (aLStack224,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_OWNER_LR_SPECIAL_HI_SET);
  fVar5 = (float)lib::L2CValue::as_number(aLStack128);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack224);
  pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,*pfVar3);
  lib::L2CValue::L2CValue(aLStack208,pfVar3[1]);
  lib::L2CValue::L2CValue(aLStack192,pfVar3[2]);
  FUN_7100008920(aLStack176,this,aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,10.0);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar4,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
  uVar2 = lib::L2CValue::as_number(pLVar4);
  lVar7 = lib::L2CValue::as_number(this_00);
  uVar6 = lib::L2CValue::as_number(this_01);
  local_60 = uVar2 & 0xffffffff | lVar7 << 0x20;
  uStack88 = (ulong)uVar6;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-10.0);
  fVar5 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  app::lua_bind::GroundModule__set_offset_y_impl(this->moduleAccessor,fVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

