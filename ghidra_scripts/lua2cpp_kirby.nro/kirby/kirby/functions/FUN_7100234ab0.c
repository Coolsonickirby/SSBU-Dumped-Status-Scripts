
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100234ab0(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  AreaContactLog *pAVar9;
  L2CValue *pLVar10;
  void *pvVar11;
  Item *pIVar12;
  ulong uVar13;
  L2CValue *this;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  this = aLStack224;
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_INHALE);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack128);
    this = aLStack144;
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_INHALE_OBJECT_NUM);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar8 = lib::L2CValue::operator==(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar8 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_AREA_KIND_EAT_ITEM);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::AreaModule__get_area_contact_count_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack112,1);
    lib::L2CValue::operator-(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    if (-1 < iVar3) {
      iVar7 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_AREA_KIND_EAT_ITEM);
        lib::L2CValue::L2CValue(aLStack192,iVar7);
        iVar4 = lib::L2CValue::as_integer(aLStack176);
        iVar5 = lib::L2CValue::as_integer(aLStack192);
        pAVar9 = (AreaContactLog *)
                 app::lua_bind::AreaModule__get_area_contact_log_impl
                           (param_1->moduleAccessor,iVar4,iVar5);
        app::lua_bind::AreaContactLog__store_l2c_table_impl(pAVar9);
        lib::L2CValue::operator=(aLStack160,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x10f1076ffb);
        lib::L2CValue::L2CValue(aLStack112,_COLLISION_CATEGORY_ITEM);
        uVar8 = lib::L2CValue::operator==(pLVar10,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar8 & 1) != 0) {
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0xa8d12e98e);
          uVar6 = lib::L2CValue::as_integer(pLVar10);
          pvVar11 = (void *)app::lua_bind::ItemManager__find_active_item_from_area_id_impl
                                      (LUA_SCRIPT_STATUS_FUNC_EXEC_STOP,uVar6);
          if (pvVar11 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack176,pvVar11);
          }
          uVar8 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar8 & 1) == 0) {
            lib::L2CAgent::clear_lua_stack(param_1);
            uVar6 = app::sv_system::owner_id(param_1->luaStateAgent);
            lib::L2CValue::L2CValue(aLStack192,uVar6);
            uVar6 = lib::L2CValue::as_integer(aLStack192);
            pIVar12 = (Item *)lib::L2CValue::as_pointer(aLStack176);
            bVar1 = app::lua_bind::Item__is_eatable_impl(pIVar12,uVar6);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack192);
            if ((bVar2 & 1U) != 0) {
              pIVar12 = (Item *)lib::L2CValue::as_pointer(aLStack176);
              uVar6 = app::lua_bind::Item__get_battle_object_id_impl(pIVar12);
              lib::L2CValue::L2CValue(aLStack192,uVar6);
              lib::L2CValue::L2CValue
                        (aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_INHALE_OBJECT_ID);
              lib::L2CValue::operator+(aLStack112,aLStack144);
              lib::L2CValue::~L2CValue(aLStack112);
              iVar4 = lib::L2CValue::as_integer(aLStack192);
              iVar5 = lib::L2CValue::as_integer(aLStack208);
              app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar4,iVar5);
              lib::L2CValue::~L2CValue(aLStack208);
              lib::L2CValue::~L2CValue(aLStack192);
              pIVar12 = (Item *)lib::L2CValue::as_pointer(aLStack176);
              app::lua_bind::Item__start_inhaled_impl(pIVar12);
              lib::L2CValue::L2CValue(aLStack112,1);
              lib::L2CValue::operator+(aLStack144,aLStack112);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::operator=(aLStack144,aLStack192);
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::L2CValue(aLStack112,4);
              uVar8 = lib::L2CValue::operator<=(aLStack112,aLStack144);
              lib::L2CValue::~L2CValue(aLStack112);
              if ((uVar8 & 1) != 0) {
                lib::L2CValue::~L2CValue(aLStack176);
                break;
              }
            }
          }
          lib::L2CValue::~L2CValue(aLStack176);
        }
        bVar2 = iVar7 < iVar3;
        iVar7 = iVar7 + 1;
      } while (bVar2);
    }
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar8 = lib::L2CValue::operator<(aLStack112,aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack224,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_INHALE_OBJECT_NUM)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar7 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar3,iVar7);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack192,0x16b61231ca);
      uVar8 = lib::L2CValue::as_integer(aLStack176);
      uVar13 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar8,uVar13);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue
                (aLStack208,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_INHALE_OBJECT_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar7 = lib::L2CValue::as_integer(aLStack208);
      app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar3,iVar7);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack224,true);
    }
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(this);
  return;
}

