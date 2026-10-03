
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000101b0(L2CValue *param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_DRINK_WEAPON);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack160);
    iVar1 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_TERM;
    for (iVar4 = _FIGHTER_KIRBY_HAVE_ITEM_WORK_0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      lib::L2CValue::L2CValue(aLStack176,iVar4);
      iVar5 = lib::L2CValue::as_integer(aLStack176);
      bVar2 = app::lua_bind::ItemModule__is_have_item_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack176,iVar4);
        iVar5 = lib::L2CValue::as_integer(aLStack176);
        iVar5 = app::lua_bind::ItemModule__get_have_item_trait_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar5);
        lib::L2CValue::L2CValue(aLStack96,iVar5);
        lib::L2CValue::operator=(aLStack160,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack96,iVar4);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = app::lua_bind::ItemModule__get_have_item_size_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar5);
        lib::L2CValue::L2CValue(aLStack176,iVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_ITEM_SIZE_HEAVY);
        uVar6 = lib::L2CValue::operator==(aLStack176,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator=(aLStack112,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,_ITEM_TRAIT_FLAG_BOMB);
        lib::L2CValue::operator&(aLStack160,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack192);
        lib::L2CValue::~L2CValue(aLStack192);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator=(aLStack144,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,_ITEM_TRAIT_FLAG_FOOD);
        lib::L2CValue::operator&(aLStack160,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack192);
        lib::L2CValue::~L2CValue(aLStack192);
        if ((bVar3 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator=(aLStack128,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        lib::L2CValue::~L2CValue(aLStack176);
      }
    }
    goto LAB_7100010550;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_DRINK_WEAPON_KIND);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
  lib::L2CValue::L2CValue(aLStack160,iVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_EAT_WEAPON_KIND_LARGE);
  uVar6 = lib::L2CValue::operator==(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_EAT_WEAPON_KIND_MISSILE);
    uVar6 = lib::L2CValue::operator==(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_71000102e0;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_EAT_WEAPON_KIND_BOMB);
    uVar6 = lib::L2CValue::operator==(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_7100010550;
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator=(aLStack144,aLStack96);
  }
  else {
LAB_71000102e0:
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator=(aLStack112,aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100010550:
  lib::L2CValue::~L2CValue(aLStack160);
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  if ((bVar3 & 1U) == 0) {
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar3 & 1U) == 0) {
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xdbae2698c);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND);
        lVar7 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int64_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar7,iVar4);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x115a8fcaa5);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR)
        ;
        lVar7 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int64_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar7,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xecd742ed0);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND);
        lVar7 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int64_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar7,iVar4);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x128f26db1f);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR)
        ;
        lVar7 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int64_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar7,iVar4);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xffc78d0d2);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND);
      lVar7 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int64_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar7,iVar4);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x13f7e15d06);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR);
      lVar7 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int64_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar7,iVar4);
    }
    lib::L2CValue::~L2CValue(aLStack160);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xe99437e30);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND);
    lVar7 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_int64_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar7,iVar4);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x12db118bff);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR);
    lVar7 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_int64_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),lVar7,iVar4);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_CHANGE_ITEM_USE_STATUS_BOMB);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar4);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

