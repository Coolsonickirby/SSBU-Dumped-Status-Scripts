
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterInkling::status::Throw_pre(L2CFighterInkling *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,lVar2);
  lib::L2CValue::L2CValue(aLStack64,0x749f709a8);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack96,0xfec6270c9);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,aLStack64);
    FUN_71000052b0(this,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lua2cpp::L2CFighterCommon::status_pre_Throw(this);
  return;
}

