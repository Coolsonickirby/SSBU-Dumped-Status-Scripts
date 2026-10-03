
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100217d90(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LINK_STATUS_BOW_WORK_INT_MAX_HOLD_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0xec7acfd87);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator==(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack80), (uVar4 & 1) != 0)) {
      lib::L2CValue::~L2CValue(aLStack144);
      goto LAB_7100217edc;
    }
    FUN_7100215980(aLStack160,this);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack160);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
LAB_7100217fcc:
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100217f14;
    }
    this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(this_00,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) goto LAB_7100217fcc;
  }
  else {
LAB_7100217edc:
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack64,FUN_71002188c0);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100217f14:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

