
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000e380(L2CFighterKoopajr *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SQUAT_WAIT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x1b);
    lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack112,0xd87461d6d);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    uVar5 = lib::L2CValue::operator<=(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SQUAT_WAIT);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        iVar3 = 1;
        goto LAB_710000e50c;
      }
    }
  }
  iVar3 = 0;
LAB_710000e50c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

