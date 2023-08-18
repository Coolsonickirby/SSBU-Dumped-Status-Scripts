
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterNana::status::PlateWait_init(L2CFighterNana *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 uStack80;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_POPO_LINK_NO_PARTNER);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  if ((bVar2 & 1U) != 0) {
    pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,*pfVar5);
    lib::L2CValue::L2CValue(aLStack128,pfVar5[1]);
    lib::L2CValue::L2CValue(aLStack112,pfVar5[2]);
    FUN_710000b240(aLStack96,this,aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack176,0xe995b27cc);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar9);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
    uVar4 = lib::L2CValue::as_integer(pLVar8);
    uVar4 = app::sv_battle_object::kind(uVar4);
    lib::L2CValue::L2CValue(aLStack176,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_KIND_POPO);
    uVar6 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&uStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    if ((uVar6 & 1) == 0) {
      fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack192,fVar9);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,1.0);
      uVar6 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&uStack80);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar6 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
        lib::L2CValue::operator_(pLVar8,aLStack160);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)&uStack80);
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
        lib::L2CValue::operator_(pLVar8,aLStack160);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)&uStack80);
      }
    }
    else {
      fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack192,fVar9);
      lib::L2CValue::L2CValue((L2CValue *)&uStack80,1.0);
      uVar6 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&uStack80);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar6 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
        lib::L2CValue::operator_(pLVar8,aLStack160);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)&uStack80);
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
        lib::L2CValue::operator_(pLVar8,aLStack160);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)&uStack80);
      }
    }
    lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x162d277af);
    uVar10 = lib::L2CValue::as_number(pLVar8);
    uVar11 = lib::L2CValue::as_number(this_00);
    uVar4 = lib::L2CValue::as_number(this_01);
    uStack80 = CONCAT44(uVar11,uVar10);
    uStack72 = (ulong)uVar4;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&uStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lua2cpp::L2CFighterCommon::sub_rebirth_uniq_process_init(this);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

