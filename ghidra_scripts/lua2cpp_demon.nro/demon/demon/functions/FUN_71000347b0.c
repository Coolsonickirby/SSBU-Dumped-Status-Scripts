
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000347b0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  ulong uVar9;
  L2CValue *this;
  float fVar10;
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_DEMON_STATUS_SPECIAL_LW_INT_PARAM_ID_HASH);
  iVar3 = lib::L2CValue::as_integer(aLStack120);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack136,lVar5);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,0);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,0);
  lib::L2CValue::L2CValue(aLStack248,0);
  lib::L2CValue::L2CValue(aLStack264,0);
  lib::L2CValue::L2CValue(aLStack280,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack280);
  fVar10 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack120,fVar10);
  lib::L2CValue::operator=(aLStack152,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack280);
  lib::L2CValue::L2CValue(aLStack280,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack280);
  fVar10 = (float)app::sv_kinetic_energy::get_speed_y(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack120,fVar10);
  lib::L2CValue::operator=(aLStack200,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack280);
  lib::L2CValue::L2CValue(aLStack120,0.0);
  lib::L2CValue::operator=(aLStack168,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack280,LINK_NO_CAPTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack280);
  bVar1 = app::lua_bind::LinkModule__is_linked_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack120,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack280);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack280,LINK_NO_CAPTURE);
    iVar3 = lib::L2CValue::as_integer(aLStack280);
    uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack120,uVar4);
    lib::L2CValue::operator=(aLStack248,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    lib::L2CValue::~L2CValue(aLStack280);
    lib::L2CValue::L2CValue(aLStack120,0x50000000);
    uVar6 = lib::L2CValue::operator==(aLStack248,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar6 & 1) == 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack248);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack120,(L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS
                  );
      }
      else {
        lib::L2CValue::L2CValue(aLStack120,pvVar7);
      }
      lib::L2CValue::L2CValue(aLStack296,0);
      iVar3 = lib::L2CValue::as_integer(aLStack296);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack120);
      fVar10 = (float)app::lua_bind::DamageModule__damage_impl(pBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack280,fVar10);
      lib::L2CValue::operator=(aLStack232,aLStack280);
      lib::L2CValue::~L2CValue(aLStack280);
      lib::L2CValue::~L2CValue(aLStack296);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack120);
      fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(pBVar8);
      lib::L2CValue::L2CValue(aLStack280,fVar10);
      lib::L2CValue::operator=(aLStack216,aLStack280);
      lib::L2CValue::~L2CValue(aLStack280);
      uVar6 = lib::L2CValue::as_integer(aLStack136);
      uVar9 = lib::L2CValue::as_integer(param_7);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_1->moduleAccessor,uVar6,uVar9);
      lib::L2CValue::L2CValue(aLStack296,fVar10);
      uVar6 = lib::L2CValue::as_integer(aLStack136);
      uVar9 = lib::L2CValue::as_integer(param_8);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_1->moduleAccessor,uVar6,uVar9);
      lib::L2CValue::L2CValue(aLStack328,fVar10);
      lib::L2CValue::operator*(aLStack328,aLStack232);
      lib::L2CValue::operator-(aLStack296,aLStack312);
      lib::L2CValue::operator=(aLStack264,aLStack280);
      lib::L2CValue::~L2CValue(aLStack280);
      lib::L2CValue::~L2CValue(aLStack312);
      lib::L2CValue::~L2CValue(aLStack328);
      lib::L2CValue::~L2CValue(aLStack296);
      uVar6 = lib::L2CValue::as_integer(aLStack136);
      uVar9 = lib::L2CValue::as_integer(param_6);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_1->moduleAccessor,uVar6,uVar9);
      lib::L2CValue::L2CValue(aLStack280,fVar10);
      uVar6 = lib::L2CValue::operator<(aLStack264,aLStack280);
      lib::L2CValue::~L2CValue(aLStack280);
      if ((uVar6 & 1) != 0) {
        uVar6 = lib::L2CValue::as_integer(aLStack136);
        uVar9 = lib::L2CValue::as_integer(param_6);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar9);
        lib::L2CValue::L2CValue(aLStack280,fVar10);
        lib::L2CValue::operator=(aLStack264,aLStack280);
        lib::L2CValue::~L2CValue(aLStack280);
      }
      lib::L2CValue::operator*(aLStack216,aLStack264);
      lib::L2CValue::operator+(aLStack168,aLStack296);
      lib::L2CValue::operator=(aLStack168,aLStack280);
      lib::L2CValue::~L2CValue(aLStack280);
      lib::L2CValue::~L2CValue(aLStack296);
      lib::L2CValue::~L2CValue(aLStack120);
    }
  }
  fVar10 = (float)app::lua_bind::ControlModule__get_stick_x_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack120,fVar10);
  lib::L2CValue::operator=(aLStack216,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  fVar10 = (float)app::lua_bind::DamageModule__damage_impl(param_1->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack120,fVar10);
  lib::L2CValue::operator=(aLStack232,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  uVar6 = lib::L2CValue::as_integer(aLStack136);
  uVar9 = lib::L2CValue::as_integer(param_4);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_1->moduleAccessor,uVar6,uVar9);
  lib::L2CValue::L2CValue(aLStack296,fVar10);
  lib::L2CValue::L2CValue(aLStack328,0xd053d90ef);
  uVar6 = lib::L2CValue::as_integer(aLStack136);
  uVar9 = lib::L2CValue::as_integer(aLStack328);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_1->moduleAccessor,uVar6,uVar9);
  lib::L2CValue::L2CValue(aLStack312,fVar10);
  lib::L2CValue::operator*(aLStack296,aLStack312);
  uVar6 = lib::L2CValue::as_integer(aLStack136);
  uVar9 = lib::L2CValue::as_integer(param_5);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_1->moduleAccessor,uVar6,uVar9);
  lib::L2CValue::L2CValue(aLStack360,fVar10);
  lib::L2CValue::operator*(aLStack360,aLStack232);
  lib::L2CValue::operator-(aLStack280,aLStack344);
  lib::L2CValue::operator=(aLStack264,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack344);
  lib::L2CValue::~L2CValue(aLStack360);
  lib::L2CValue::~L2CValue(aLStack280);
  lib::L2CValue::~L2CValue(aLStack312);
  lib::L2CValue::~L2CValue(aLStack328);
  lib::L2CValue::~L2CValue(aLStack296);
  uVar6 = lib::L2CValue::as_integer(aLStack136);
  uVar9 = lib::L2CValue::as_integer(param_3);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_1->moduleAccessor,uVar6,uVar9);
  lib::L2CValue::L2CValue(aLStack120,fVar10);
  uVar6 = lib::L2CValue::operator<(aLStack264,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((uVar6 & 1) != 0) {
    uVar6 = lib::L2CValue::as_integer(aLStack136);
    uVar9 = lib::L2CValue::as_integer(param_3);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_1->moduleAccessor,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack120,fVar10);
    lib::L2CValue::operator=(aLStack264,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
  }
  lib::L2CValue::operator*(aLStack216,aLStack264);
  lib::L2CValue::operator+(aLStack168,aLStack280);
  lib::L2CValue::operator=(aLStack168,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack280);
  uVar6 = lib::L2CValue::as_integer(aLStack136);
  uVar9 = lib::L2CValue::as_integer(param_9);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_1->moduleAccessor,uVar6,uVar9);
  lib::L2CValue::L2CValue(aLStack120,fVar10);
  uVar6 = lib::L2CValue::operator<(aLStack120,aLStack168);
  lib::L2CValue::~L2CValue(aLStack120);
  if ((uVar6 & 1) == 0) {
    uVar6 = lib::L2CValue::as_integer(aLStack136);
    uVar9 = lib::L2CValue::as_integer(param_9);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_1->moduleAccessor,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack280,fVar10);
    lib::L2CValue::operator-(aLStack280);
    uVar6 = lib::L2CValue::operator<(aLStack168,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    lib::L2CValue::~L2CValue(aLStack280);
    if ((uVar6 & 1) == 0) goto LAB_7100034f70;
    uVar6 = lib::L2CValue::as_integer(aLStack136);
    uVar9 = lib::L2CValue::as_integer(param_9);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_1->moduleAccessor,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack280,fVar10);
    lib::L2CValue::operator-(aLStack280);
    lib::L2CValue::operator=(aLStack168,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    this = aLStack280;
  }
  else {
    uVar6 = lib::L2CValue::as_integer(aLStack136);
    uVar9 = lib::L2CValue::as_integer(param_9);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_1->moduleAccessor,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack120,fVar10);
    lib::L2CValue::operator=(aLStack168,aLStack120);
    this = aLStack120;
  }
  lib::L2CValue::~L2CValue(this);
LAB_7100034f70:
  lib::L2CValue::operator+(aLStack152,aLStack168);
  lib::L2CValue::operator=(aLStack152,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  uVar6 = lib::L2CValue::as_integer(aLStack136);
  uVar9 = lib::L2CValue::as_integer(param_2);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_1->moduleAccessor,uVar6,uVar9);
  lib::L2CValue::L2CValue(aLStack280,fVar10);
  lib::L2CValue::L2CValue(aLStack312,0xafae6a09d);
  uVar6 = lib::L2CValue::as_integer(aLStack136);
  uVar9 = lib::L2CValue::as_integer(aLStack312);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (param_1->moduleAccessor,uVar6,uVar9);
  lib::L2CValue::L2CValue(aLStack296,fVar10);
  lib::L2CValue::operator*(aLStack280,aLStack296);
  lib::L2CValue::operator=(aLStack184,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack296);
  lib::L2CValue::~L2CValue(aLStack312);
  lib::L2CValue::~L2CValue(aLStack280);
  uVar6 = lib::L2CValue::operator<(aLStack184,aLStack152);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::operator-(aLStack184);
    uVar6 = lib::L2CValue::operator<(aLStack152,aLStack120);
    lib::L2CValue::~L2CValue(aLStack120);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::operator-(aLStack184);
      lib::L2CValue::operator=(aLStack152,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
    }
  }
  else {
    lib::L2CValue::operator=(aLStack152,aLStack184);
  }
  lib::L2CValue::L2CValue(aLStack120,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack120);
  lib::L2CAgent::push_lua_stack(param_1,aLStack152);
  lib::L2CAgent::push_lua_stack(param_1,aLStack200);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack136);
  return;
}

