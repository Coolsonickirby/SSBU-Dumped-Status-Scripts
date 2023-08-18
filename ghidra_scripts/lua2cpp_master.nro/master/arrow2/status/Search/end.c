
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterArrow2::status::Search_end(L2CWeaponMasterArrow2 *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  float *pfVar5;
  L2CValue *pLVar6;
  L2CValue *this_00;
  L2CValue *this_01;
  Weapon *pWVar7;
  Hash40 HVar8;
  ulong uVar9;
  Vector2f VVar10;
  undefined in_w3;
  float fVar11;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,*pfVar5);
  lib::L2CValue::L2CValue(aLStack160,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack144,pfVar5[2]);
  VVar10 = (int)register0x00000008 - 0xb0;
  FUN_7100005230(aLStack128,this);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack192,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack208,pLVar6);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_PRE_MOVE_POS_X);
  fVar11 = (float)lib::L2CValue::as_number(aLStack224);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_PRE_MOVE_POS_Y);
  fVar11 = (float)lib::L2CValue::as_number(aLStack224);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_MASTER_ARROW1_STATUS_WORK_ID_FLAG_ATTACKED);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack224,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_END_POS_X);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_END_POS_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar6,aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_HIT_POS_X);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,_WEAPON_MASTER_ARROW1_STATUS_WORK_FLOAT_HIT_POS_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack224);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar6,aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_MASTER_ARROW1_STATUS_WORK_ID_FLAG_ATTACKED);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
    lib::L2CValue::as_number(aLStack192);
    lib::L2CValue::as_number(aLStack208);
    lib::L2CValue::as_number(this_00);
    lib::L2CValue::as_number(this_01);
    app::WeaponSpecializer_MasterArrow1::set_arrow_max_effect(pWVar7,0,VVar10,(bool)in_w3);
    lib::L2CValue::L2CValue(aLStack112,0x11a4fa64fc);
    lib::L2CValue::L2CValue(aLStack224,true);
    lib::L2CValue::L2CValue(aLStack240,true);
    HVar8 = lib::L2CValue::as_hash(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack224);
    bVar3 = lib::L2CValue::as_bool(aLStack240);
    app::lua_bind::EffectModule__kill_kind_impl
              (this->moduleAccessor,HVar8,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
    FUN_71000058f0(this);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_MASTER_ARROW1_STATUS_KIND_STAY);
  uVar9 = lib::L2CValue::operator__(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0x18b3160cb9);
    lib::L2CValue::L2CValue(aLStack224,true);
    lib::L2CValue::L2CValue(aLStack240,true);
    HVar8 = lib::L2CValue::as_hash(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack224);
    bVar3 = lib::L2CValue::as_bool(aLStack240);
    app::lua_bind::EffectModule__kill_kind_impl
              (this->moduleAccessor,HVar8,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

