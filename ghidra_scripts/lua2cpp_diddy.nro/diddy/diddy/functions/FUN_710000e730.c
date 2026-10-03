
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000e730(L2CAgent *param_1)

{
  byte bVar1;
  int iVar2;
  HitStatus HVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  BattleObjectModuleAccessor *pBVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,FIGHTER_STATUS_KIND_FINAL);
  uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_DIDDY_STATUS_KIND_FINAL_START);
    uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_DIDDY_STATUS_KIND_FINAL_WAIT_FLY);
      uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_DIDDY_STATUS_KIND_FINAL_FLY);
        uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
        lib::L2CValue::~L2CValue((L2CValue *)&local_40);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_40,_FIGHTER_DIDDY_STATUS_KIND_FINAL_READY_CHARGE);
          uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
          lib::L2CValue::~L2CValue((L2CValue *)&local_40);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_DIDDY_STATUS_KIND_FINAL_CHARGE);
            uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
            lib::L2CValue::~L2CValue((L2CValue *)&local_40);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_40,_FIGHTER_DIDDY_STATUS_KIND_FINAL_FINISH_ATTACK);
              uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
              lib::L2CValue::~L2CValue((L2CValue *)&local_40);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue
                          ((L2CValue *)&local_40,_FIGHTER_DIDDY_STATUS_KIND_FINAL_READY_END);
                uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
                lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                if ((uVar5 & 1) == 0) {
                  lib::L2CValue::L2CValue
                            ((L2CValue *)&local_40,_FIGHTER_DIDDY_STATUS_KIND_FINAL_END);
                  uVar5 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
                  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                  if ((uVar5 & 1) == 0) {
                    lib::L2CValue::L2CValue
                              ((L2CValue *)&local_40,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
                    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
                    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar2);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                    lib::L2CValue::L2CValue((L2CValue *)&local_40,0x8820306e5);
                    HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_40);
                    app::lua_bind::EffectModule__remove_common_impl(param_1->moduleAccessor,HVar6);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                    lib::L2CValue::L2CValue((L2CValue *)&local_40,0x92ee4d34c);
                    HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_40);
                    app::lua_bind::EffectModule__remove_common_impl(param_1->moduleAccessor,HVar6);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                    lib::L2CValue::L2CValue((L2CValue *)&local_40,HIT_STATUS_NORMAL);
                    HVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
                    app::lua_bind::HitModule__set_whole_impl(param_1->moduleAccessor,HVar3,0);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                    lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
                    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_40);
                    app::lua_bind::AreaModule__set_whole_impl
                              (param_1->moduleAccessor,(bool)(bVar1 & 1));
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                    lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
                    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_40);
                    app::lua_bind::GroundModule__set_collidable_impl
                              (param_1->moduleAccessor,(bool)(bVar1 & 1));
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                    lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
                    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_40);
                    app::lua_bind::VisibilityModule__set_whole_impl
                              (param_1->moduleAccessor,(bool)(bVar1 & 1));
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                    lib::L2CValue::L2CValue(aLStack96,0.0);
                    lib::L2CValue::L2CValue(aLStack112,0.0);
                    lib::L2CValue::L2CValue(aLStack128,0.0);
                    uVar8 = lib::L2CValue::as_number(aLStack96);
                    uVar9 = lib::L2CValue::as_number(aLStack112);
                    uVar10 = lib::L2CValue::as_number(aLStack128);
                    local_40 = CONCAT44(uVar9,uVar8);
                    uStack56 = (ulong)uVar10;
                    app::lua_bind::PostureModule__set_rot_impl
                              (param_1->moduleAccessor,(Vector3f *)&local_40,0);
                    lib::L2CValue::~L2CValue(aLStack128);
                    lib::L2CValue::~L2CValue(aLStack112);
                    lib::L2CValue::~L2CValue(aLStack96);
                    app::lua_bind::CameraModule__end_final_zoom_out_impl(param_1->moduleAccessor);
                    lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
                    pLVar4 = (L2CValue *)
                             lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,5);
                    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_40);
                    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
                    app::FighterUtil::set_stage_pause_for_final((bool)(bVar1 & 1),pBVar7);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                    lib::L2CValue::L2CValue
                              ((L2CValue *)&local_40,_FIGHTER_DIDDY_GENERATE_ARTICLE_BARRELJETS);
                    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
                    app::lua_bind::ArticleModule__remove_exist_impl(param_1->moduleAccessor,iVar2,0)
                    ;
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                    lib::L2CValue::L2CValue(aLStack144,false);
                    FUN_710000a4e0(param_1,aLStack144);
                    lib::L2CValue::~L2CValue(aLStack144);
                    lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
                    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_40);
                    app::lua_bind::SoundModule__set_gamespeed_se_calibration_impl
                              (param_1->moduleAccessor,(bool)(bVar1 & 1));
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                    lib::L2CValue::L2CValue((L2CValue *)&local_40,0x1e0aba2d68);
                    lib::L2CAgent::clear_lua_stack(param_1);
                    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_40);
                    app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
                    lib::L2CAgent::pop_lua_stack(param_1,1);
                    lib::L2CValue::~L2CValue(aLStack160);
                    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

