
void FUN_7100188b80(undefined8 param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  ulong uVar2;
  L2CValue *this;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StopModule__is_stop_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,false);
    FUN_7100187d40(aLStack96,param_2,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack64,FUN_7100187f90);
  lib::L2CValue::operator=(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack128,L2CFighterKirby::status::KenSpecialN2Command_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

