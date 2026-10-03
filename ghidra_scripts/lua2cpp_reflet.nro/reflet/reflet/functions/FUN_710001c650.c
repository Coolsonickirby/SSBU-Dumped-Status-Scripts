
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c650(L2CAgent *param_1)

{
  BattleObject **this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  HitStatus HVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = &param_1[2].battleObject;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_HIT);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_MOVE);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_READY);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_ATTACK);
        uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar6 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_END);
          uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar6 & 1) == 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_FAIL);
            uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_GENERATE_ARTICLE_CHROM);
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              bVar1 = app::lua_bind::ArticleModule__is_exist_impl(param_1->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::~L2CValue(aLStack80);
              if ((bVar2 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_GENERATE_ARTICLE_CHROM);
                iVar3 = lib::L2CValue::as_integer(aLStack64);
                app::lua_bind::ArticleModule__remove_impl(param_1->moduleAccessor,iVar3,0);
                lib::L2CValue::~L2CValue(aLStack64);
              }
              lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
              HVar4 = lib::L2CValue::as_integer(aLStack64);
              app::lua_bind::HitModule__set_whole_impl(param_1->moduleAccessor,HVar4,0);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,0x1e0aba2d68);
              lib::L2CAgent::clear_lua_stack(param_1);
              lib::L2CAgent::push_lua_stack(param_1,aLStack64);
              app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
              lib::L2CAgent::pop_lua_stack(param_1,1);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::~L2CValue(aLStack64);
            }
          }
        }
      }
    }
  }
  return;
}

