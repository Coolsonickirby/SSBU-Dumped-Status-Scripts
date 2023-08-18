
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MiigunnerSpecialN1Hold_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::operator_(aLStack112,pLVar3);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MIIGUNNER_SPECIAL_N1_FIRE);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_MIIGUNNER_SPECIAL_N1_CANCEL);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_GUARD_ON);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE);
        uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ESCAPE_F);
          uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_B);
            uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0);
              lib::L2CValue::L2CValue
                        (aLStack128,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT);
              iVar1 = lib::L2CValue::as_integer(aLStack80);
              iVar2 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_GENERATE_ARTICLE_GUNNERCHARGE);
              iVar1 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
              HVar5 = lib::L2CValue::as_hash(aLStack80);
              app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar5);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue
                        (aLStack128,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX);
              iVar1 = lib::L2CValue::as_integer(aLStack128);
              iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
              lib::L2CValue::L2CValue(aLStack80,iVar1);
              lib::L2CValue::operator_(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::L2CValue(aLStack80,0);
              uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack128,_MA_MSC_EFFECT_REMOVE);
                lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
                app::sv_module_access::effect(this->luaStateAgent);
                lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack128);
              }
              goto LAB_7100053a58;
            }
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_GENERATE_ARTICLE_GUNNERCHARGE);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    FUN_710021dd60(aLStack144,this);
    uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::EffectModule__req_common_impl(this->moduleAccessor,HVar5,0.0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack128,_MA_MSC_EFFECT_REQUEST_FOLLOW);
      lib::L2CValue::L2CValue(aLStack144,0x136c65c600);
      lib::L2CValue::L2CValue(aLStack160,0x51129036e);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,1.0);
      lib::L2CValue::L2CValue(aLStack288,false);
      lib::L2CValue::L2CValue(aLStack304,0);
      lib::L2CValue::L2CValue(aLStack320,0);
      lib::L2CValue::L2CValue(aLStack336,0);
      FUN_7100191510(aLStack80,this,aLStack128,aLStack144,aLStack160,aLStack176,aLStack192,
                     aLStack208,aLStack224,aLStack240,aLStack256,aLStack272,aLStack288,aLStack304,
                     aLStack320,aLStack336);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
      app::FighterUtil::flash_eye_info(pBVar6);
    }
  }
LAB_7100053a58:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

