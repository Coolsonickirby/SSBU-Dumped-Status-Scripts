
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001ff50(L2CAgent *param_1)

{
  byte bVar1;
  int iVar2;
  Vector4f VVar3;
  int iVar4;
  HitStatus HVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GEKKOUGA_STATUS_KIND_FINAL_WAIT);
  uVar7 = lib::L2CValue::operator==(pLVar6,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GEKKOUGA_STATUS_KIND_FINAL_END);
    uVar7 = lib::L2CValue::operator==(pLVar6,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x1e0aba2d68);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack64);
      app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_1,1);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_GEKKOUGA_INSTACNE_WORK_ID_FLOAT_FINAL_ORIGINAL_BG_COLOR_R);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack64,fVar8);
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_GEKKOUGA_INSTACNE_WORK_ID_FLOAT_FINAL_ORIGINAL_BG_COLOR_G);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack112,fVar8);
      lib::L2CValue::L2CValue
                (aLStack160,_FIGHTER_GEKKOUGA_INSTACNE_WORK_ID_FLOAT_FINAL_ORIGINAL_BG_COLOR_B);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack144,fVar8);
      lib::L2CValue::L2CValue
                (aLStack192,_FIGHTER_GEKKOUGA_INSTACNE_WORK_ID_FLOAT_FINAL_ORIGINAL_BG_COLOR_A);
      iVar2 = lib::L2CValue::as_integer(aLStack192);
      fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack176,fVar8);
      lib::L2CValue::as_number(aLStack64);
      lib::L2CValue::as_number(aLStack112);
      lib::L2CValue::as_number(aLStack144);
      VVar3 = lib::L2CValue::as_number(aLStack176);
      app::FighterUtil::renderer_set_clear_color(VVar3);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      app::lua_bind::FighterManager__enable_ko_camera_impl(LUA_SCRIPT_LINE_STATUS_SYSTEM);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GEKKOUGA_GENERATE_ARTICLE_GEKKOUGAS);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_GEKKOUGA_GEKKOUGAS_STATUS_KIND_EFFECT_WAIT);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::ArticleModule__change_status_impl(param_1->moduleAccessor,iVar2,iVar4,0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
      HVar5 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::HitModule__set_whole_impl(param_1->moduleAccessor,HVar5,0);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::AreaModule__set_whole_impl(param_1->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  return;
}

