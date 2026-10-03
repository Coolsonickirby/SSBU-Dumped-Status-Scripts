
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022aa0(L2CValue *param_1,void *param_2)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_INT_SPEED_Y_STABLE_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack64,iVar1);
    lib::L2CValue::L2CValue(aLStack112,0x13c30c93f0);
    lib::L2CValue::L2CValue(aLStack128,0);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack96,iVar1);
    uVar3 = lib::L2CValue::operator<(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_LANDING);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::~L2CValue(aLStack192);
      pLVar2 = aLStack176;
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_LANDING_LIGHT);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar2 = aLStack144;
    }
    lib::L2CValue::~L2CValue(pLVar2);
    iVar1 = 1;
  }
  lib::L2CValue::L2CValue(param_1,iVar1);
  return;
}

