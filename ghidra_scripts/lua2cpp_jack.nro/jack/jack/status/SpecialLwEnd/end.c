
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialLwEnd_end(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  FighterEntryID FVar3;
  ulong uVar4;
  L2CValue *this_00;
  ulong uVar5;
  BattleObjectModuleAccessor *pBVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_STATUS_SPECIAL_LW_FLAG_ENDURE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack64,iVar2);
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0xff2fde5b3);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
    FVar3 = lib::L2CValue::as_integer(aLStack64);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    app::FighterSpecializer_Jack::add_rebel_gauge(pBVar6,FVar3,fVar7);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

