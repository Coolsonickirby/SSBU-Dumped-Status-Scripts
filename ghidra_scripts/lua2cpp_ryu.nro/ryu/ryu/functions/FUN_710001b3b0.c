
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b3b0(undefined8 param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StopModule__is_stop_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,false);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_INT_BUTTON_ON_TIMER);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__inc_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack64,FUN_710001b550);
  lib::L2CValue::operator=(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack128,FUN_710001b600);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

