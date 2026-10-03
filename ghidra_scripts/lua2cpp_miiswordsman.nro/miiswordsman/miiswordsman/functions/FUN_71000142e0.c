
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000142e0(L2CFighterMiiswordsman *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_MIISWORDSMAN_STATUS_WORK_ID_INT_JET_STUB_START_SITUATION);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
LAB_7100014420:
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) goto LAB_7100014500;
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) goto LAB_7100014500;
    lib::L2CValue::L2CValue(aLStack64,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack96,0x1bee1b703a);
    lib::L2CValue::L2CValue(aLStack112,0xc8cc9db76);
    lib::L2CValue::L2CValue(aLStack128,0);
    FUN_7100014a80(this,aLStack64,aLStack96,aLStack112,aLStack128);
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) goto LAB_7100014420;
    lib::L2CValue::L2CValue(aLStack64,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack96,0x1ee7a1542a);
    lib::L2CValue::L2CValue(aLStack112,0xc8cc9db76);
    lib::L2CValue::L2CValue(aLStack128,0);
    FUN_7100014a80(this,aLStack64,aLStack96,aLStack112,aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100014500:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

