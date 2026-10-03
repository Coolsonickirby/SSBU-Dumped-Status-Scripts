
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000144a0(L2CAgent *param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this;
  FighterModuleAccessor *pFVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x1e0aba2d68);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack48);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0);
  uVar2 = lib::L2CValue::operator==(param_2,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack48,_MA_MSC_LINK_ADJUST_MODEL_CONSTRAINT_POSTURE);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack48);
    app::sv_module_access::link(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack48);
    app::lua_bind::LinkModule__remove_model_constraint_impl(param_1->moduleAccessor,true);
  }
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_PIKMIN_GENERATE_ARTICLE_DOLFIN);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::ArticleModule__remove_exist_impl(param_1->moduleAccessor,iVar1,0);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_MA_MSC_CMD_CAMERA_CAM_ENABLE_ZOOM_REQ);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack48);
  app::sv_module_access::camera(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack48);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,5);
  lib::L2CValue::L2CValue(aLStack48,0.01);
  pFVar3 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this);
  fVar4 = (float)lib::L2CValue::as_number(aLStack48);
  app::FighterSpecializer_Pikmin::set_glare_fog_color(pFVar3,fVar4);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

