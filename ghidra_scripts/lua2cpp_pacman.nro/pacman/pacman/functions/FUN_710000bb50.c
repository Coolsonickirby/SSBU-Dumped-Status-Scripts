
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000bb50(L2CAgent *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
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
  
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,0);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,0);
  lib::L2CValue::L2CValue(aLStack248,_PACMAN_SPECIAL_S_PUT_ESA_NUM);
  iVar1 = lib::L2CValue::as_integer(aLStack248);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack264,iVar4);
      lib::L2CValue::L2CValue
                (aLStack120,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_S_EFFECT_HANDLE0);
      lib::L2CValue::operator+(aLStack120,aLStack264);
      lib::L2CValue::~L2CValue(aLStack120);
      iVar2 = lib::L2CValue::as_integer(aLStack296);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack280,iVar2);
      lib::L2CValue::operator=(aLStack232,aLStack280);
      lib::L2CValue::~L2CValue(aLStack280);
      lib::L2CValue::~L2CValue(aLStack296);
      lib::L2CValue::L2CValue(aLStack120,_PACMAN_SPECIAL_S_EFFECT_INVALID);
      uVar3 = lib::L2CValue::operator==(aLStack232,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X0);
        lib::L2CValue::operator+(aLStack120,aLStack264);
        lib::L2CValue::~L2CValue(aLStack120);
        iVar2 = lib::L2CValue::as_integer(aLStack296);
        fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack280,fVar5);
        lib::L2CValue::operator=(aLStack200,aLStack280);
        lib::L2CValue::~L2CValue(aLStack280);
        lib::L2CValue::~L2CValue(aLStack296);
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y0);
        lib::L2CValue::operator+(aLStack120,aLStack264);
        lib::L2CValue::~L2CValue(aLStack120);
        iVar2 = lib::L2CValue::as_integer(aLStack296);
        fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack280,fVar5);
        lib::L2CValue::operator=(aLStack184,aLStack280);
        lib::L2CValue::~L2CValue(aLStack280);
        lib::L2CValue::~L2CValue(aLStack296);
        fVar5 = (float)app::lua_bind::PostureModule__pos_x_impl(param_1->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack120,fVar5);
        lib::L2CValue::operator=(aLStack136,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        fVar5 = (float)app::lua_bind::PostureModule__pos_y_impl(param_1->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack120,fVar5);
        lib::L2CValue::operator=(aLStack168,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        fVar5 = (float)app::lua_bind::PostureModule__pos_z_impl(param_1->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack120,fVar5);
        lib::L2CValue::operator=(aLStack152,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        lib::L2CValue::L2CValue(aLStack120,MA_MSC_EFFECT_SET_POS);
        lib::L2CValue::operator+(aLStack136,aLStack200);
        lib::L2CValue::operator+(aLStack168,aLStack184);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack120);
        lib::L2CAgent::push_lua_stack(param_1,aLStack232);
        lib::L2CAgent::push_lua_stack(param_1,aLStack280);
        lib::L2CAgent::push_lua_stack(param_1,aLStack296);
        lib::L2CAgent::push_lua_stack(param_1,aLStack152);
        app::sv_module_access::effect(param_1->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_1,1);
        lib::L2CValue::~L2CValue(aLStack312);
        lib::L2CValue::~L2CValue(aLStack296);
        lib::L2CValue::~L2CValue(aLStack280);
        lib::L2CValue::~L2CValue(aLStack120);
      }
      lib::L2CValue::~L2CValue(aLStack264);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
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

