
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100057a10(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10,L2CValue *param_11)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  long lVar7;
  long lVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_START_HOLD);
  iVar2 = lib::L2CValue::as_integer(aLStack168);
  ppBVar10 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar2);
  lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack136,true);
  uVar4 = lib::L2CValue::operator==(aLStack152,aLStack136);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack168);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack136,false);
    uVar4 = lib::L2CValue::operator==(param_8,aLStack136);
    lib::L2CValue::~L2CValue(aLStack136);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack136,true);
      uVar4 = lib::L2CValue::operator==(param_11,aLStack136);
      lib::L2CValue::~L2CValue(aLStack136);
      if ((uVar4 & 1) != 0) {
        iVar2 = lib::L2CValue::as_integer(param_9);
        bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar10,iVar2);
        lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack136,true);
        uVar4 = lib::L2CValue::operator==(aLStack152,aLStack136);
        lib::L2CValue::~L2CValue(aLStack136);
        lib::L2CValue::~L2CValue(aLStack152);
        if ((uVar4 & 1) != 0) {
          iVar2 = lib::L2CValue::as_integer(param_2);
          fVar11 = (float)app::lua_bind::MotionModule__frame_partial_impl(*ppBVar10,iVar2);
          lib::L2CValue::L2CValue(aLStack152,fVar11);
          lib::L2CValue::L2CValue(aLStack136,0x1351539e6d);
          lib::L2CValue::L2CValue(aLStack184,0);
          uVar4 = lib::L2CValue::as_integer(aLStack136);
          uVar5 = lib::L2CValue::as_integer(aLStack184);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack168,fVar11);
          lib::L2CValue::~L2CValue(aLStack184);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::L2CValue(aLStack136,0x14d34d14d0);
          lib::L2CValue::L2CValue(aLStack200,0);
          uVar4 = lib::L2CValue::as_integer(aLStack136);
          uVar5 = lib::L2CValue::as_integer(aLStack200);
          iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack184,iVar2);
          lib::L2CValue::~L2CValue(aLStack200);
          lib::L2CValue::~L2CValue(aLStack136);
          HVar6 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar10);
          lib::L2CValue::L2CValue(aLStack200,HVar6);
          pLVar9 = aLStack168;
          lib::L2CValue::operator/(aLStack184,pLVar9);
          lib::L2CAgent::math_ceil((L2CAgent *)aLStack136,pLVar9);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::operator/(aLStack184,aLStack216);
          lib::L2CValue::operator=(aLStack168,aLStack136);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::L2CValue(aLStack248,0x192bdc7824);
          lib::L2CValue::L2CValue(aLStack264,0);
          uVar4 = lib::L2CValue::as_integer(aLStack248);
          uVar5 = lib::L2CValue::as_integer(aLStack264);
          iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack232,iVar2);
          lib::L2CValue::operator+(aLStack216,aLStack232);
          lib::L2CValue::operator=(aLStack216,aLStack136);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::~L2CValue(aLStack232);
          lib::L2CValue::~L2CValue(aLStack264);
          lib::L2CValue::~L2CValue(aLStack248);
          lib::L2CValue::L2CValue
                    (aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_LEG);
          lVar7 = lib::L2CValue::as_integer(aLStack200);
          iVar2 = lib::L2CValue::as_integer(aLStack136);
          app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar7,iVar2);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::L2CValue(aLStack136,0.0);
          lib::L2CValue::L2CValue(aLStack232,false);
          HVar6 = lib::L2CValue::as_hash(param_4);
          fVar11 = (float)lib::L2CValue::as_number(aLStack136);
          fVar12 = (float)lib::L2CValue::as_number(aLStack168);
          bVar1 = lib::L2CValue::as_bool(aLStack232);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar10,HVar6,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue(aLStack232);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::L2CValue(aLStack136,0.0);
          lib::L2CValue::operator+(aLStack152,aLStack136);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::L2CValue
                    (aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_RESTART_FRAME);
          fVar11 = (float)lib::L2CValue::as_number(aLStack232);
          iVar2 = lib::L2CValue::as_integer(aLStack136);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar2);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::~L2CValue(aLStack232);
          lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME)
          ;
          iVar2 = lib::L2CValue::as_integer(aLStack216);
          iVar3 = lib::L2CValue::as_integer(aLStack136);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar3);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::L2CValue(aLStack136,0.0);
          iVar2 = lib::L2CValue::as_integer(param_2);
          HVar6 = lib::L2CValue::as_hash(param_3);
          fVar11 = (float)lib::L2CValue::as_number(aLStack136);
          fVar12 = (float)lib::L2CValue::as_number(aLStack168);
          app::lua_bind::MotionModule__add_motion_partial_impl
                    (*ppBVar10,iVar2,HVar6,fVar11,fVar12,false,false,0.0,true,true,false);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_PUNCH_L);
          bVar1 = lib::L2CValue::as_bool(param_10);
          iVar2 = lib::L2CValue::as_integer(aLStack136);
          app::lua_bind::WorkModule__set_flag_impl(*ppBVar10,(bool)(bVar1 & 1),iVar2);
          lib::L2CValue::~L2CValue(aLStack136);
          iVar2 = lib::L2CValue::as_integer(param_7);
          app::lua_bind::ArticleModule__generate_article_impl(*ppBVar10,iVar2,false,-1);
          lib::L2CValue::L2CValue(aLStack136,0x11b762dbc9);
          iVar2 = lib::L2CValue::as_integer(param_7);
          HVar6 = lib::L2CValue::as_hash(aLStack136);
          app::lua_bind::ArticleModule__change_motion_impl(*ppBVar10,iVar2,HVar6,false,-1.0);
          lib::L2CValue::~L2CValue(aLStack136);
          iVar2 = lib::L2CValue::as_integer(param_7);
          fVar11 = (float)lib::L2CValue::as_number(aLStack168);
          app::lua_bind::ArticleModule__set_rate_impl(*ppBVar10,iVar2,fVar11);
          lVar7 = lib::L2CValue::as_integer(param_5);
          lVar8 = lib::L2CValue::as_integer(param_6);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar10,lVar7,lVar8);
          lib::L2CValue::L2CValue(aLStack296,param_5);
          lib::L2CValue::L2CValue(aLStack312,0xd9838e994);
          FUN_710002a0c0(aLStack280,param_1,aLStack296,aLStack312);
          lib::L2CValue::~L2CValue(aLStack280);
          lib::L2CValue::~L2CValue(aLStack312);
          lib::L2CValue::~L2CValue(aLStack296);
          lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CHARGE);
          iVar2 = lib::L2CValue::as_integer(aLStack136);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar2);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::L2CValue(aLStack232,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack248,0x172e79126f);
          uVar4 = lib::L2CValue::as_integer(aLStack232);
          uVar5 = lib::L2CValue::as_integer(aLStack248);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack136,fVar11);
          fVar11 = (float)lib::L2CValue::as_number(aLStack136);
          app::lua_bind::DamageModule__set_reaction_mul_2nd_impl(*ppBVar10,fVar11);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::~L2CValue(aLStack248);
          lib::L2CValue::~L2CValue(aLStack232);
          lib::L2CValue::L2CValue(aLStack136,0xaf2735dbb);
          HVar6 = lib::L2CValue::as_hash(aLStack136);
          app::lua_bind::EffectModule__req_common_impl(*ppBVar10,HVar6,0.0);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::~L2CValue(aLStack216);
          lib::L2CValue::~L2CValue(aLStack200);
          lib::L2CValue::~L2CValue(aLStack184);
          lib::L2CValue::~L2CValue(aLStack168);
          lib::L2CValue::~L2CValue(aLStack152);
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_START_HOLD);
    iVar2 = lib::L2CValue::as_integer(aLStack136);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar2);
    lib::L2CValue::~L2CValue(aLStack136);
  }
  return;
}

