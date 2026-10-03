
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000220f0(L2CValue *param_1,long param_2)

{
  int iVar1;
  L2CValue *pLVar2;
  L2CValue *this;
  code *pcVar3;
  long *plVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  app::GimmickEventLadder::new_l2c_table();
  iVar1 = _GIMMICK_EVENT_TO_GIMMICK;
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_1,0x34202cb7b);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator=(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  iVar1 = _GIMMICK_LADDER_EVENT_KIND_GET_INFO;
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_1,0xb97f9bc08);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator=(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_INT_GIMMICK_ID);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_1,0xa854977fe);
  lib::L2CValue::operator=(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),3);
  this = (L2CValue *)lib::L2CValue::operator[](param_1,0xaa79e68a2);
  lib::L2CValue::operator=(this,pLVar2);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](param_1,0x11f63699bf);
  pcVar3 = (code *)lib::L2CValue::as_pointer(pLVar2);
  plVar4 = (long *)(*pcVar3)();
  app::lua_bind::GimmickEvent__load_from_l2c_table_impl((GimmickEvent *)plVar4,param_1);
  app::lua_bind::GimmickEventPresenter__dispatch_event_from_fighter_impl
            (FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_SPEED_X,(GimmickEvent *)plVar4);
  app::lua_bind::GimmickEvent__store_l2c_table_impl((GimmickEvent *)plVar4);
  lib::L2CValue::L2CValue(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  (**(code **)(*plVar4 + 8))(plVar4);
  lib::L2CValue::operator=(param_1,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

