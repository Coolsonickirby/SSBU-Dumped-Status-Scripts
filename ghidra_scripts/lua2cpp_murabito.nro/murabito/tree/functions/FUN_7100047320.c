
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100047320(void *param_1,L2CValue *param_2)

{
  int iVar1;
  long lVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack64,_WEAPON_MURABITO_TREE_INSTANCE_WORK_ID_INT_DISAPPEAR_MOTION_KIND);
  lVar2 = lib::L2CValue::as_integer(param_2);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),lVar2,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_TREE_STATUS_KIND_DISAPPEAR);
  lib::L2CValue::L2CValue(aLStack96,false);
  lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

