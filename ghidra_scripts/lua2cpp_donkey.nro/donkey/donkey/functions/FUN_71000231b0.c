
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000231b0(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::ControlModule__is_jump_mini_button_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(this_00,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_FALL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      goto LAB_71000232f0;
    }
    FUN_7100022520(aLStack64,this);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) {
      iVar3 = 0;
      goto LAB_7100023308;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_JUMP);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
LAB_71000232f0:
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  iVar3 = 1;
LAB_7100023308:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

