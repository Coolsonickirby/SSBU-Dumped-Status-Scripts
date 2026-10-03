
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001caf0(L2CFighterTrail *this,L2CValue *return_value)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  L2CValue *this_00;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x20);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
  lib::L2CValue::operator&(this_00,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TRAIL_STATUS_ATTACK_S3_FLAG_CHECK_COMBO_BUTTON_ON);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      bVar2 = false;
      bVar3 = 0;
      bVar1 = true;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_ATTACK);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar3 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      bVar1 = true;
      bVar2 = true;
    }
  }
  else {
    bVar1 = false;
    bVar2 = false;
    bVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(bool)(bVar3 & 1));
  if (bVar2) {
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  if (bVar1) {
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

