
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000248d0(L2CValue *param_1,L2CWeaponCommon *param_2,L2CValue *param_3)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator<=(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,param_3);
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar7 = aLStack144;
    goto LAB_7100024c4c;
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FIRE_INSTANCE_WORK_ID_FLAG_HIT_WALL);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar3 & 1U) == 0) {
    lua2cpp::L2CWeaponCommon::sub_ground_module_is_touch_all_consider_speed(param_2);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar3 & 1U) == 0) {
      lVar1 = -0x60;
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack96,1);
      uVar6 = lib::L2CValue::operator<=(aLStack96,pLVar7);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) goto LAB_7100024b50;
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_EDGE_FIRE_INSTANCE_WORK_ID_FLAG_HIT_WALL);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack96,1);
      uVar6 = lib::L2CValue::operator<=(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack208,param_3);
        lib::L2CValue::L2CValue(aLStack224,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x30,(L2CValue)0x20);
        lib::L2CValue::~L2CValue(aLStack224);
        pLVar7 = aLStack208;
        goto LAB_7100024c4c;
      }
      lib::L2CValue::L2CValue(aLStack96,2);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::StopModule__set_other_stop_impl(param_2->moduleAccessor,iVar4,0);
      lVar1 = -0x50;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack96,2);
    uVar6 = lib::L2CValue::operator<=(aLStack96,pLVar7);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,param_3);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::~L2CValue(aLStack192);
      pLVar7 = aLStack176;
      goto LAB_7100024c4c;
    }
  }
LAB_7100024b50:
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_EDGE_FIRE_INSTANCE_WORK_ID_FLAG_ATTACK);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack240,_GROUND_TOUCH_FLAG_ALL);
    uVar5 = lib::L2CValue::as_integer(aLStack240);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(param_2->moduleAccessor,uVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue(param_1,0);
      return;
    }
  }
  else {
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack256,param_3);
  lib::L2CValue::L2CValue(aLStack272,false);
  lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
  lib::L2CValue::~L2CValue(aLStack272);
  pLVar7 = aLStack256;
LAB_7100024c4c:
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::L2CValue(param_1,true);
  return;
}

