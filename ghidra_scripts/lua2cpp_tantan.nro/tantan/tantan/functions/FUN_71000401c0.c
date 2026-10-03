
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000401c0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  uVar2 = app::lua_bind::CatchModule__capture_object_id_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,uVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar4);
  }
  lib::L2CValue::L2CValue(param_1,_FIGHTER_WAIST_SIZE_M);
  uVar5 = lib::L2CValue::operator==
                    (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  if ((uVar5 & 1) == 0) {
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    uVar2 = app::sv_battle_object::category(uVar2);
    lib::L2CValue::L2CValue(aLStack112,uVar2 & 0xff);
    lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_FIGHTER);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xcad2ee25e);
      lib::L2CValue::L2CValue(aLStack128,0xa5257feed);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(pBVar7,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::operator=(param_1,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

