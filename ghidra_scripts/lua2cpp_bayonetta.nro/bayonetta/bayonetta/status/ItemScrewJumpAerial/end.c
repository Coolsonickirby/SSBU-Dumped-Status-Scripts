
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::ItemScrewJumpAerial_end
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_JumpAerial(this);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack128,0x16dca4b6c7);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BAYONETTA_STATUS_JUMP_INT_JUMP_COUNT_BACKUP);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_BAYONETTA_STATUS_JUMP_INT_ITEM_SCREW_JUMP_COUNT_BACKUP);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_INT_SCREW_JUMP_COUNT);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

