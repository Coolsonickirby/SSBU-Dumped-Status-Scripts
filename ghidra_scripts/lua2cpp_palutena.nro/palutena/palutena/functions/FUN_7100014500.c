
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014500(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  int iVar7;
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PALUTENA_STATUS_KIND_SPECIAL_LW_ATTACK);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_7100014a50;
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PALUTENA_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK_POWER);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar6 = lib::L2CValue::operator<(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_7100014a50;
    uVar6 = app::lua_bind::AttackModule__part_size_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,uVar6);
    lib::L2CValue::operator=(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack144,aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    if (0 < iVar3) {
      iVar7 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack160,iVar7);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::AttackModule__is_attack_impl(param_2->moduleAccessor,iVar4,false);
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar6 = lib::L2CValue::operator==(aLStack176,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,false);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          fVar8 = (float)lib::L2CValue::as_number(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack80);
          app::lua_bind::AttackModule__set_power_impl
                    (param_2->moduleAccessor,iVar4,fVar8,(bool)(bVar1 & 1));
          lib::L2CValue::~L2CValue(aLStack80);
        }
        lib::L2CValue::~L2CValue(aLStack160);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PALUTENA_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack144);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PALUTENA_STATUS_SPECIAL_LW_FLAG_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::operator!(aLStack144);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar2 & 1U) == 0) goto LAB_7100014a50;
      lib::L2CValue::L2CValue(aLStack144,_MA_MSC_SHIELD_SET_STATUS);
      lib::L2CValue::L2CValue(aLStack160,COLLISION_KIND_SHIELD);
      lib::L2CValue::L2CValue(aLStack176,0);
      lib::L2CValue::L2CValue(aLStack192,_SHIELD_STATUS_NONE);
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PALUTENA_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack144);
      lib::L2CAgent::push_lua_stack(param_2,aLStack160);
      lib::L2CAgent::push_lua_stack(param_2,aLStack176);
      lib::L2CAgent::push_lua_stack(param_2,aLStack192);
      lib::L2CAgent::push_lua_stack(param_2,aLStack208);
      app::sv_module_access::shield(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PALUTENA_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PALUTENA_STATUS_SPECIAL_LW_FLAG_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) goto LAB_7100014a50;
      lib::L2CValue::L2CValue(aLStack144,_MA_MSC_SHIELD_SET_STATUS);
      lib::L2CValue::L2CValue(aLStack160,COLLISION_KIND_SHIELD);
      lib::L2CValue::L2CValue(aLStack176,0);
      lib::L2CValue::L2CValue(aLStack192,_SHIELD_STATUS_NORMAL);
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PALUTENA_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack144);
      lib::L2CAgent::push_lua_stack(param_2,aLStack160);
      lib::L2CAgent::push_lua_stack(param_2,aLStack176);
      lib::L2CAgent::push_lua_stack(param_2,aLStack192);
      lib::L2CAgent::push_lua_stack(param_2,aLStack208);
      app::sv_module_access::shield(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PALUTENA_STATUS_SPECIAL_LW_FLAG_SHIELD_CHK);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
    }
  }
  lib::L2CValue::~L2CValue(aLStack144);
LAB_7100014a50:
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator==(aLStack224,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue(param_1,(uint)((uVar6 & 1) == 0));
  return;
}

