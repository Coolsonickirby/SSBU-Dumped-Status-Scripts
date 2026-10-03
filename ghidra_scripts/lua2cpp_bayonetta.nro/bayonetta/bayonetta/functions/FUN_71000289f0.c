
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000289f0(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_D_FLAG_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_D_HIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x14);
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::operator=(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x15);
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::operator=(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

