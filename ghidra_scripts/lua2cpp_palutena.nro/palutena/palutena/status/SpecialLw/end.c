
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPalutena::status::SpecialLw_end(L2CFighterPalutena *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CTable *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  float *pfVar4;
  float fVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PALUTENA_STATUS_SPECIAL_LW_FLAG_IS_SPECIAL_LW);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PALUTENA_STATUS_KIND_SPECIAL_LW_REFLECT);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar3 & 1) != 0) {
    this_00 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(this_00,0);
    lib::L2CValue::L2CValue(aLStack112,this_00);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack160,0);
    lib::L2CValue::operator_(pLVar2,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack160,0);
    lib::L2CValue::operator_(pLVar2,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    lib::L2CValue::L2CValue(aLStack160,0);
    lib::L2CValue::operator_(pLVar2,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,*pfVar4);
    lib::L2CValue::L2CValue(aLStack144,pfVar4[1]);
    lib::L2CValue::L2CValue(aLStack128,pfVar4[2]);
    lib::L2CValue::operator_(pLVar2,aLStack160);
    lib::L2CValue::operator_(this_01,aLStack144);
    lib::L2CValue::operator_(this_02,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PALUTENA_STATUS_SPECIAL_LW_WORK_FLOAT_SHOT_OBJECT_X)
    ;
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack176,fVar5);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack192,-1.0);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    uVar3 = lib::L2CValue::operator_(aLStack176,pLVar2);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::operator_(aLStack192,aLStack160);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,-1.0);
      lib::L2CValue::operator_(aLStack192,aLStack160);
    }
    lib::L2CValue::_L2CValue(aLStack160);
    fVar5 = (float)lib::L2CValue::as_number(aLStack192);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar5);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

