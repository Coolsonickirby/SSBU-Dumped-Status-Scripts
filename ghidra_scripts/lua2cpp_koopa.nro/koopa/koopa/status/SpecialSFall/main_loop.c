
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopa::status::SpecialSFall_main_loop(L2CFighterKoopa *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_KOOPAG);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPA_STATUS_SPECIAL_S_INT_CAPTURE_FRAME);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack128,0x1bec2937c9);
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack96,iVar1);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_CAPTURE_JUMP);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        return;
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    iVar1 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_KIND_SPECIAL_S_LANDING);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    iVar1 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar1);
  return;
}

