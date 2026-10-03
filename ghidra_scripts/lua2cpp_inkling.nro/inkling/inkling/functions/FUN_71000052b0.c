
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000052b0(L2CAgent *param_1,L2CValue *param_2)

{
  BattleObject **this;
  byte bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  void *pvVar6;
  Fighter *pFVar7;
  Hash40 HVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack288 [16];
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
  
  iVar2 = FIGHTER_KIND_KIRBY;
  this = &param_1[2].battleObject;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  uVar5 = lib::L2CValue::operator==(aLStack112,pLVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_INK_SUCCESS);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
  uVar3 = lib::L2CValue::as_integer(pLVar4);
  iVar2 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack192,fVar10);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack208,aLStack192);
  lib::L2CAgent::clear_lua_stack(param_1);
  pvVar6 = (void *)app::sv_system::battle_object(param_1->luaStateAgent);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar6);
  }
  pFVar7 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
  fVar10 = (float)app::FighterSpecializer_Inkling::get_ink_max(pFVar7);
  lib::L2CValue::L2CValue(aLStack224,fVar10);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar5 = lib::L2CValue::operator<(aLStack112,aLStack192);
  lib::L2CValue::~L2CValue(aLStack112);
  iVar2 = FIGHTER_KIND_KIRBY;
  if ((uVar5 & 1) == 0) {
    lib::L2CAgent::clear_lua_stack(param_1);
    pvVar6 = (void *)app::sv_system::battle_object(param_1->luaStateAgent);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar6);
    }
    pFVar7 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
    app::FighterSpecializer_Inkling::lack_ink(pFVar7);
    pLVar4 = aLStack112;
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    uVar5 = lib::L2CValue::operator==(aLStack112,pLVar4);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_INK_SUCCESS);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::operator-(aLStack192,param_2);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,aLStack224);
    lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::operator=(aLStack192,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    pLVar4 = aLStack240;
  }
  lib::L2CValue::~L2CValue(pLVar4);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar5 = lib::L2CValue::operator<=(aLStack192,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0x4ad12b739);
    lib::L2CValue::L2CValue(aLStack128,0xa48dd021e);
    HVar8 = lib::L2CValue::as_hash(aLStack112);
    HVar9 = lib::L2CValue::as_hash(aLStack128);
    app::lua_bind::VisibilityModule__set_status_default_impl(param_1->moduleAccessor,HVar8,HVar9);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_MOTION_PART_SET_KIND_TANK);
    lib::L2CValue::L2CValue(aLStack128,0xa48dd021e);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,true);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    HVar8 = lib::L2CValue::as_hash(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    fVar11 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (param_1->moduleAccessor,iVar2,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),false,0.0,true,
               true,false);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack112,aLStack208);
    lib::L2CValue::~L2CValue(aLStack112);
    iVar2 = FIGHTER_KIND_KIRBY;
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
      lib::L2CValue::L2CValue(aLStack112,iVar2);
      uVar5 = lib::L2CValue::operator==(aLStack112,pLVar4);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x14b63f46d5);
        HVar8 = lib::L2CValue::as_hash(aLStack112);
        iVar2 = app::lua_bind::SoundModule__play_se_impl
                          (param_1->moduleAccessor,HVar8,true,false,false,false,0);
        lib::L2CValue::L2CValue(aLStack288,iVar2);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack112);
      }
    }
  }
  lib::L2CAgent::clear_lua_stack(param_1);
  pvVar6 = (void *)app::sv_system::battle_object(param_1->luaStateAgent);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar6);
  }
  pFVar7 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
  fVar10 = (float)lib::L2CValue::as_number(aLStack192);
  app::FighterSpecializer_Inkling::change_ink(pFVar7,fVar10);
  lib::L2CValue::~L2CValue(aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
  uVar3 = lib::L2CValue::as_integer(pLVar4);
  iVar2 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_INSTANCE_WORK_ID_INT_LAMP_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CAgent::clear_lua_stack(param_1);
  pvVar6 = (void *)app::sv_system::battle_object(param_1->luaStateAgent);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar6);
  }
  pFVar7 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
  fVar10 = (float)app::FighterSpecializer_Inkling::get_sub_ink_special_lw(pFVar7);
  lib::L2CValue::L2CValue(aLStack160,fVar10);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CAgent::clear_lua_stack(param_1);
  pvVar6 = (void *)app::sv_system::battle_object(param_1->luaStateAgent);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar6);
  }
  pFVar7 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
  bVar1 = app::FighterSpecializer_Inkling::is_body_visible(pFVar7);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar5 = lib::L2CValue::operator<(aLStack144,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) goto LAB_7100005998;
  uVar5 = lib::L2CValue::operator<=(aLStack160,aLStack128);
  if ((uVar5 & 1) == 0) {
LAB_710000595c:
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::EffectModule__set_visible_impl(param_1->moduleAccessor,uVar3,(bool)(bVar1 & 1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar5 = lib::L2CValue::operator==(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_710000595c;
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::EffectModule__set_visible_impl(param_1->moduleAccessor,uVar3,(bool)(bVar1 & 1));
  }
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100005998:
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  return;
}

