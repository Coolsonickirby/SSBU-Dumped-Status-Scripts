
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004cc60(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  BattleObject **this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator<=(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      this = &param_2[2].battleObject;
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xe);
      lib::L2CValue::L2CValue(aLStack96,1);
      uVar5 = lib::L2CValue::operator<(aLStack96,pLVar6);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_ALL);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(param_2->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack160,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_INT_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack128,iVar3);
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_RYU_HADOKEN_TYPE_NORMAL);
          uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack160);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0x13908405bd);
            lib::L2CValue::operator=(aLStack112,aLStack96);
          }
          else {
            pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
            lib::L2CValue::L2CValue(aLStack96,_WEAPON_KIND_RYU_HADOKEN);
            uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,0x109554bc35);
              lib::L2CValue::operator=(aLStack112,aLStack96);
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,0x108615bd5f);
              lib::L2CValue::operator=(aLStack112,aLStack96);
            }
          }
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack176,aLStack112);
          FUN_710004d800(param_2,aLStack176);
          lib::L2CValue::~L2CValue(aLStack176);
          FUN_710004d770(param_2);
          lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack96);
          app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(param_2,1);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(param_1,0);
          goto LAB_710004d384;
        }
      }
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_FLAG_HIT_END);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack160,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_INT_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_RYU_HADOKEN_TYPE_NORMAL);
        uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x1234725c1b);
          lib::L2CValue::operator=(aLStack112,aLStack96);
        }
        else {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,2);
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_KIND_RYU_HADOKEN);
          uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xfe49cc7dc);
            lib::L2CValue::operator=(aLStack112,aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0xfc905fbc4);
            lib::L2CValue::operator=(aLStack112,aLStack96);
          }
        }
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack208,aLStack112);
        FUN_710004d800(param_2,aLStack208);
        lib::L2CValue::~L2CValue(aLStack208);
        FUN_710004d770(param_2);
        lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack96);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(param_1,0);
LAB_710004d384:
        lib::L2CValue::~L2CValue(aLStack112);
        return;
      }
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_FLAG_LAST_HIT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar1 & 1U) == 0) goto LAB_710004cd80;
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_INT_TYPE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_RYU_HADOKEN_TYPE_SYAKUNETU);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_INT_STRENGTH);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STRENGTH_W);
        uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_INT_STRENGTH);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STRENGTH_M);
          uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xdd1bdfe48);
            lib::L2CValue::L2CValue(aLStack112,0.0);
            lib::L2CValue::L2CValue(aLStack128,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar7 = lib::L2CValue::as_hash(aLStack96);
            fVar8 = (float)lib::L2CValue::as_number(aLStack112);
            fVar9 = (float)lib::L2CValue::as_number(aLStack128);
            bVar2 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (param_2->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0xde8619da3);
            lib::L2CValue::L2CValue(aLStack112,0.0);
            lib::L2CValue::L2CValue(aLStack128,1.0);
            lib::L2CValue::L2CValue(aLStack160,false);
            HVar7 = lib::L2CValue::as_hash(aLStack96);
            fVar8 = (float)lib::L2CValue::as_number(aLStack112);
            fVar9 = (float)lib::L2CValue::as_number(aLStack128);
            bVar2 = lib::L2CValue::as_bool(aLStack160);
            app::lua_bind::MotionModule__change_motion_impl
                      (param_2->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0xd4a2cbc5e);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack160,false);
          HVar7 = lib::L2CValue::as_hash(aLStack96);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          fVar9 = (float)lib::L2CValue::as_number(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack160);
          app::lua_bind::MotionModule__change_motion_impl
                    (param_2->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
        }
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_RYU_HADOKEN_INSTANCE_WORK_ID_FLAG_LAST_HIT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    }
    else {
      FUN_710004d770(param_2);
      lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack144);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710004cd80:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

