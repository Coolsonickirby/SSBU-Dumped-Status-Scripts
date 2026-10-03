
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100008340(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,true);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  uVar2 = app::lua_bind::CatchModule__capture_object_id_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,uVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,pvVar4);
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_WAIST_SIZE_M);
  uVar5 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar5 & 1) == 0) {
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    uVar2 = app::sv_battle_object::category(uVar2);
    lib::L2CValue::L2CValue(aLStack160,uVar2 & 0xff);
    lib::L2CValue::L2CValue(aLStack96,_BATTLE_OBJECT_CATEGORY_FIGHTER);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,0xcad2ee25e);
      lib::L2CValue::L2CValue(aLStack176,0xa5257feed);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(pBVar7,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::operator=(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WAIST_SIZE_M);
  uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WAIST_SIZE_L);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,param_3);
    }
    else {
      lib::L2CValue::L2CValue(param_1,param_5);
    }
  }
  else {
    lib::L2CValue::L2CValue(param_1,param_4);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

