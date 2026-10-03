
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021910(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_SWING_THROWN_FIGHTER);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x50000000);
  uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::sv_battle_object::is_null(uVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,false);
      goto LAB_7100021c20;
    }
  }
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
LAB_7100021c0c:
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,pvVar6);
      }
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar7);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      uVar4 = app::sv_battle_object::category(uVar4);
      lib::L2CValue::L2CValue(aLStack128,uVar4 & 0xff);
      lib::L2CValue::L2CValue(aLStack144,false);
      lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_FIGHTER);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SWING_GAOGAEN_CATCHED);
        uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SWING_GAOGAEN_THROWN);
          uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SWING_GAOGAEN_ATTACH_ROPE);
            uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SWING_GAOGAEN_RETURN);
              uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack64,true);
                lib::L2CValue::operator=(aLStack144,aLStack64);
                lib::L2CValue::~L2CValue(aLStack64);
              }
            }
          }
        }
      }
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(param_1,false);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        goto LAB_7100021c20;
      }
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      goto LAB_7100021c0c;
    }
  }
  lib::L2CValue::L2CValue(param_1,true);
LAB_7100021c20:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

