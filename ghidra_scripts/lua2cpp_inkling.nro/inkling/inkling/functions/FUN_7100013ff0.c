
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013ff0(L2CAgent *param_1)

{
  int iVar1;
  uint uVar2;
  L2CValue *this;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  Hash40 HVar6;
  void *pvVar7;
  Fighter *pFVar8;
  float fVar9;
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
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_CHARGE_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_CHARGE_INK_WORK_INT_CHARGE_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__inc_int_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,2);
  uVar2 = lib::L2CValue::as_integer(this);
  iVar1 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar2);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack128,0xae80243e3);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack144,0x7ae071a51);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack160,0x12811f8834);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lib::L2CValue::operator+(aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,aLStack128);
  lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::operator=(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar3 = lib::L2CValue::operator<(aLStack64,aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x4ad12b739);
    lib::L2CValue::L2CValue(aLStack224,0xb47a34911);
    HVar5 = lib::L2CValue::as_hash(aLStack64);
    HVar6 = lib::L2CValue::as_hash(aLStack224);
    app::lua_bind::VisibilityModule__set_status_default_impl(param_1->moduleAccessor,HVar5,HVar6);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_MOTION_PART_SET_KIND_TANK);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::MotionModule__remove_motion_partial_impl(param_1->moduleAccessor,iVar1,false);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CAgent::clear_lua_stack(param_1);
  pvVar7 = (void *)app::sv_system::battle_object(param_1->luaStateAgent);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,pvVar7);
  }
  pFVar8 = (Fighter *)lib::L2CValue::as_pointer(aLStack64);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  app::FighterSpecializer_Inkling::change_ink(pFVar8,fVar9);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar3 = lib::L2CValue::operator<(aLStack160,aLStack144);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = lib::L2CValue::operator<=(aLStack144,aLStack96), (uVar3 & 1) != 0)) {
    lib::L2CValue::L2CValue(aLStack64,0x1967fcadf6);
    HVar5 = lib::L2CValue::as_hash(aLStack64);
    iVar1 = app::lua_bind::SoundModule__play_se_impl
                      (param_1->moduleAccessor,HVar5,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack240,iVar1);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack256,aLStack80);
  FUN_7100014910(param_1,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

