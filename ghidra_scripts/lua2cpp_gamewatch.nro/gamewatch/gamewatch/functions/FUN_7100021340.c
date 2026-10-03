
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021340(L2CValue *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x1a);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator*(pLVar3,aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack128,0xc60e57049);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack64);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x1c);
    lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack176,0xcba8643d6);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack144,iVar2);
    uVar4 = lib::L2CValue::operator<(pLVar3,aLStack144);
    uVar4 = uVar4 & 0xffffffff;
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_SWIM_DASH);
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue(param_1,(uint)bVar1);
  return;
}

