
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004ab50(L2CAgent *param_1)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack224 [16];
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
  
  FUN_7100040930();
  lib::L2CValue::L2CValue
            (aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLAG_IS_PERPLEXED);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLAG_IS_PERPLEXED);
    iVar5 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar5);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack112,false);
    cVar1 = (char)&stack0xfffffffffffffff0;
    lua2cpp::L2CFighterBase::change_status
              (param_1,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
    lib::L2CValue::~L2CValue(aLStack112);
    lVar2 = -0x50;
    goto LAB_710004ae3c;
  }
  lib::L2CValue::L2CValue(aLStack128,0x289a9c79db);
  lib::L2CValue::L2CValue(aLStack160,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack176,0x14a96c5752);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  uVar7 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_ALL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    return;
  }
  lib::L2CValue::L2CValue
            (aLStack64,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_FOLLOW);
  iVar5 = lib::L2CValue::as_integer(aLStack64);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack80,iVar5);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_WAIT);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_MOVE);
    uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) goto LAB_710004adfc;
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_TURN);
    uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) goto LAB_710004adfc;
  }
  else {
LAB_710004adfc:
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
  }
  lVar2 = -0x40;
LAB_710004ae3c:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  return;
}

