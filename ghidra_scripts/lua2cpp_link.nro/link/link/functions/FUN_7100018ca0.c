
void __thiscall FUN_7100018ca0(L2CFighterLink *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  int iVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar1 & 1U) != 0) {
    iVar5 = 1;
    goto LAB_7100018ed4;
  }
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
LAB_7100018dc8:
    FUN_7100017b00(this);
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack80);
LAB_7100018e80:
      lib::L2CValue::L2CValue(aLStack64,FUN_7100017ea0);
      lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
      lib::L2CValue::~L2CValue(aLStack64);
      return;
    }
    FUN_7100012b50(aLStack96,this);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      pLVar4 = aLStack96;
      goto LAB_7100018ec0;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator==(pLVar4,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) goto LAB_7100018e80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar4 = aLStack112;
LAB_7100018ec0:
      lib::L2CValue::~L2CValue(pLVar4);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar3 = lib::L2CValue::operator==(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) goto LAB_7100018dc8;
    }
  }
  iVar5 = 0;
LAB_7100018ed4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

